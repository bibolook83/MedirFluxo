#include <ESP8266WiFi.h>
#include <FirebaseESP8266.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

// Configurações da tela OLED
#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define OLED_RESET -1
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

// Configurações do Firebase
#define FIREBASE_HOST "https://SEUHOST.firebaseio.com"  // host do Firebase
#define FIREBASE_AUTH "KEY"  // chave de autenticação do Firebase

// Configurações do Wi-Fi
const char* ssid = "SEU_SSID";  // SSID
const char* password = "SUA_SENHA";  // senha

// Objeto Firebase
FirebaseData firebaseData;

// Pino do sensor de fluxo
const int flowSensorPin = 2;  // GPIO2 (D4 no ESP8266)

// Variáveis para cálculo de fluxo
volatile int pulseCount = 0;
float flowRate = 0.0;
float totalLiters = 0.0;
unsigned long oldTime = 0;

void ICACHE_RAM_ATTR pulseCounter() {
  pulseCount++;
}

void setup() {
  Serial.begin(115200);

  // Inicializando a tela OLED
  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println(F("Falha ao inicializar a OLED"));
    while (true);
  }

  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0, 0);
  display.println(F("Inicializando..."));
  display.display();

  // Conectando ao Wi-Fi
  WiFi.begin(ssid, password);
  display.println(F("Conectando ao Wi-Fi..."));
  display.display();
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  display.println(F("Conectado!"));
  display.display();

  // Inicializando Firebase
  Firebase.begin(FIREBASE_HOST, FIREBASE_AUTH);
  Firebase.reconnectWiFi(true);

  // Configuração do sensor de fluxo
  pinMode(flowSensorPin, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(flowSensorPin), pulseCounter, FALLING);

  oldTime = millis();
}

void loop() {
  // Cálculo da taxa de fluxo
  if ((millis() - oldTime) > 1000) {
    detachInterrupt(digitalPinToInterrupt(flowSensorPin));

    float flowRate = (pulseCount / 7.5);  // Taxa de fluxo em L/min
    totalLiters += (flowRate / 60.0);  // Total de litros

    // Enviando dados para Firebase
    if (Firebase.pushFloat(firebaseData, "/sensor/flowRate", flowRate)) {
      Serial.println("Taxa de fluxo enviada: " + String(flowRate));
    } else {
      Serial.println("Falha ao enviar dados: " + firebaseData.errorReason());
    }

    if (Firebase.pushFloat(firebaseData, "/sensor/totalLiters", totalLiters)) {
      Serial.println("Total de litros enviado: " + String(totalLiters));
    } else {
      Serial.println("Falha ao enviar dados: " + firebaseData.errorReason());
    }

    // Atualizando a tela OLED
    display.clearDisplay();
    display.setCursor(0, 0);
    display.println("Taxa de fluxo:");
    display.println(String(flowRate) + " L/min");
    display.println("Total de litros:");
    display.println(String(totalLiters) + " L");
    display.display();

    pulseCount = 0;
    oldTime = millis();
    attachInterrupt(digitalPinToInterrupt(flowSensorPin), pulseCounter, FALLING);
  }
}
