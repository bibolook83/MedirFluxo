# Painel de monitoramento de fluxo de água

Este projeto consiste em um painel de monitoramento de fluxo de água, desenvolvido com HTML, CSS e JavaScript. O painel exibe um gráfico interativo em tempo real, visualizando os dados de fluxo de água registrados nos últimos 30 dias. Os dados são armazenados e atualizados continuamente no Firebase Realtime Database, garantindo a visualização em tempo real. Além disso, o painel apresenta uma tabela detalhada que lista os valores de fluxo diário, proporcionando uma análise mais aprofundada do consumo de água.

## Recursos

- **Gráfico de linhas em tempo real**: visualiza a taxa de fluxo de água dos últimos 30 dias usando a biblioteca `Chart.js`.
- **Tabela de dados**: exibe os valores exatos de fluxo de água para cada um dos últimos 30 dias.
- **Layout responsivo**: inclui uma barra lateral para navegação e uma área de conteúdo principal responsiva que se ajusta a diferentes tamanhos de tela.
- **Barra lateral do menu**: um menu simples para navegar por diferentes seções (atualmente links não funcionais para demonstração).

## Tecnologias usadas

- **HTML5**: para estrutura e conteúdo.
- **CSS3**: para layout e estilo, incluindo uma barra lateral responsiva e design de grade.
- **JavaScript**: para gerar dinamicamente os dados do gráfico e da tabela.
- **Chart.js**: Uma biblioteca poderosa para criar gráficos e visualizar dados de forma interativa.

## Screenshot

![Water Flow Monitoring Dashboard](/img/img01.jpeg)
![Water Flow Monitoring Dashboard](/img/img02.jpeg)
![Water Flow Monitoring Dashboard](/img/img03.jpeg)
![Water Flow Monitoring Dashboard](/img/img04.jpeg)

## HTML Exibição
![Water Flow Monitoring Dashboard](/img/img06.png)
![Water Flow Monitoring Dashboard](/img/img07.png)


## Configuração

1. Clone este repositório para sua máquina local:
```bash
git clone https://github.com/bibolook83/MedirFluxo.git
```

2. Navegue até a pasta do projeto:
```bash
cd MedirFluxo
```

3. Abra o arquivo `index.html` no seu navegador para visualizar o painel:
- Você pode simplesmente arrastar o arquivo para o seu navegador ou clicar com o botão direito e escolher "Abrir com" para visualizar a página.

## Estrutura do arquivo

```plaintext
water-flow-monitoring/
│
├── index.html # Arquivo HTML principal que inclui o layout do painel
├── README.md # Este arquivo README com detalhes do projeto
└── assets/ # Pasta para quaisquer ativos futuros (imagens, estilos, etc.)

Aqui está a versão atualizada do seu arquivo README.md, com a inclusão dos detalhes do projeto com ESP8266, OLED Display, YF-S201 e Firebase Realtime Database:

---

# Painel de Monitoramento de Fluxo de Água

Este projeto consiste em um painel de monitoramento de fluxo de água, desenvolvido com HTML, CSS e JavaScript. O painel exibe um gráfico interativo em tempo real, visualizando os dados de fluxo de água registrados nos últimos 30 dias. Os dados são armazenados e atualizados continuamente no Firebase Realtime Database, garantindo a visualização em tempo real. Além disso, o painel apresenta uma tabela detalhada que lista os valores de fluxo diário, proporcionando uma análise mais aprofundada do consumo de água.

## Recursos

- **Gráfico de linhas em tempo real**: visualiza a taxa de fluxo de água dos últimos 30 dias usando a biblioteca `Chart.js`.
- **Tabela de dados**: exibe os valores exatos de fluxo de água para cada um dos últimos 30 dias.
- **Layout responsivo**: inclui uma barra lateral para navegação e uma área de conteúdo principal responsiva que se ajusta a diferentes tamanhos de tela.
- **Barra lateral do menu**: um menu simples para navegar por diferentes seções (atualmente links não funcionais para demonstração).

## Tecnologias Usadas

- **HTML5**: para estrutura e conteúdo.
- **CSS3**: para layout e estilo, incluindo uma barra lateral responsiva e design de grade.
- **JavaScript**: para gerar dinamicamente os dados do gráfico e da tabela.
- **Chart.js**: Uma biblioteca poderosa para criar gráficos e visualizar dados de forma interativa.
- **Firebase Realtime Database**: Para armazenamento e atualização em tempo real dos dados de fluxo de água.

## Detalhes Adicionais do Projeto: ESP8266, OLED Display, YF-S201 e Firebase Realtime Database

Este projeto também inclui uma implementação com ESP8266, sensor de fluxo de água YF-S201, display OLED e o Firebase Realtime Database para gravar os dados de fluxo em tempo real.

### Componentes Usados

- **ESP8266**: Controlador Wi-Fi para conexão e envio de dados ao Firebase.
- **YF-S201**: Sensor de fluxo de água utilizado para medir a taxa de fluxo em litros por minuto.
- **Display OLED**: Tela para exibição local de informações como taxa de fluxo e volume total.
- **Firebase Realtime Database**: Banco de dados usado para armazenar e sincronizar os dados de fluxo de água.

### Bibliotecas Utilizadas

- `SSD1306Wire.h`: Para controlar o display OLED.
- `ESP8266WiFi.h`: Para conectar o ESP8266 à rede Wi-Fi.
- `FirebaseESP8266.h`: Para conectar o ESP8266 ao Firebase Realtime Database.
- `NTPClient.h`: Para obter a hora atual da Internet.
- `TimeLib.h`: Para manipulação de tempo.

#![Water Flow Monitoring Dashboard](/img/img01.jpeg)


![Water Flow Monitoring Dashboard](/img/img02.jpeg)

![Water Flow Monitoring Dashboard](/img/img03.jpeg)

![Water Flow Monitoring Dashboard](/img/img04.jpeg)

## HTML exibição
![Water Flow Monitoring Dashboard](/img/img06.png)
![Water Flow Monitoring Dashboard](/img/img07.png)


## Configuração

1. Clone este repositório para sua máquina local:
   ```bash
   git clone https://github.com/bibolook83/MedirFluxo.git
   ```

2. Navegue até a pasta do projeto:
   ```bash
   cd MedirFluxo
   ```

3. Abra o arquivo `index.html` no seu navegador para visualizar o painel:
   - Você pode simplesmente arrastar o arquivo para o seu navegador ou clicar com o botão direito e escolher "Abrir com" para visualizar a página.

## Estrutura do Projeto

```plaintext
water-flow-monitoring/
│
├── index.html # Arquivo HTML principal que inclui o layout do painel
├── README.md  # Este arquivo README com detalhes do projeto
├── assets/    # Pasta para quaisquer ativos futuros (imagens, estilos, etc.)
└── img/       # Pasta com as imagens e screenshots do projeto
```

---

Agora o README.md inclui informações sobre o ESP8266, OLED Display, YF-S201, e Firebase, além dos detalhes sobre o monitoramento em tempo real no painel web. Se precisar ajustar mais detalhes, me avise!