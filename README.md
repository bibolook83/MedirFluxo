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

## Estrutura do arquivo

```plaintext
water-flow-monitoring/
│
├── index.html # Arquivo HTML principal que inclui o layout do painel
├── README.md # Este arquivo README com detalhes do projeto
└── assets/ # Pasta para quaisquer ativos futuros (imagens, estilos, etc.)