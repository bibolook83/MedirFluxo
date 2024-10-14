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


Este projeto de Painel de Monitoramento de Fluxo de Água inclui um sistema de Machine Learning para detecção de anomalias no fluxo de água. A ideia é utilizar um Autoencoder para detectar padrões irregulares nos dados de fluxo de água e identificar possíveis anomalias, como vazamentos ou mau funcionamento de equipamentos.

Estrutura da Adição de Machine Learning

O modelo de Autoencoder será responsável por aprender o comportamento normal do fluxo de água com base em dados históricos. Ele então será capaz de identificar desvios significativos que possam indicar anomalias.

1. Pré-processamento dos dados:

Os dados de fluxo de água são escalados usando MinMaxScaler para garantir que estejam em uma faixa compreensível pelo modelo.



2. Treinamento do modelo:

Utilizamos 80% dos dados para treinamento e 20% para teste.

O modelo é treinado para reconstruir o próprio conjunto de entrada. A diferença entre a entrada e a saída reconstruída (erro de reconstrução) é usada para detectar anomalias.



3. Detecção de anomalias:

Após o treinamento, calculamos o erro de reconstrução para determinar um limiar de anomalia (por exemplo, o percentil 95 do erro de reconstrução nos dados de treinamento). Dados com erro acima desse limiar são classificados como anômalos.




Exemplo de Código Adicional (Python e Flask)

O código já mencionado acima pode ser incorporado em uma aplicação Flask para exibir as anomalias diretamente no painel. A seguir estão algumas funções principais já descritas:

Função train_autoencoder: Constrói e treina o modelo Autoencoder.

Função detect_anomalies: Verifica se há anomalias nos dados, comparando o erro de reconstrução com o limiar estabelecido.

Renderização do resultado: O template result.html mostra os dados de fluxo e destaca as anomalias.


Fluxo do Projeto

Etapa 1: O painel coleta dados de fluxo de água em tempo real e os armazena no Firebase.

Etapa 2: Os dados são processados e utilizados para treinar um modelo de Machine Learning (Autoencoder) que aprende o comportamento normal.

Etapa 3: O modelo detecta anomalias nos dados de fluxo recentes e alerta sobre possíveis problemas no sistema de água.

Etapa 4: Os resultados são exibidos no painel, com visualizações de gráficos e uma tabela detalhada mostrando os pontos de anomalia.


Com essas funcionalidades integradas, o sistema pode não apenas monitorar o consumo de água, mas também prevenir desperdícios e alertar os usuários sobre comportamentos inesperados no fluxo de água.





## Estrutura do arquivo

```plaintext
water-flow-monitoring/
│
├── index.html # Arquivo HTML principal que inclui o layout do painel
├── README.md # Este arquivo README com detalhes do projeto
└── assets/ # Pasta para quaisquer ativos futuros (imagens, estilos, etc.)