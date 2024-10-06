// Função para abrir/fechar o menu lateral
const toggleMenuBtn = document.getElementById('toggleMenuBtn');
const sidebar = document.getElementById('sidebar');

toggleMenuBtn.addEventListener('click', () => {
    sidebar.classList.toggle('open'); // Adiciona ou remove a classe 'open'
});

// Função para gerar uma data no formato YYYY-MM-DD
function generateDate(daysAgo) {
    const today = new Date();
    const pastDate = new Date(today);
    pastDate.setDate(today.getDate() - daysAgo);
    return pastDate.toISOString().split('T')[0]; // Formato 'YYYY-MM-DD'
}

// Gerar dados fictícios para os últimos 30 dias
const labels = [];
const dataValues = [];

for (let i = 29; i >= 0; i--) {
    labels.push(generateDate(i)); // Adiciona as datas no formato 'YYYY-MM-DD'
    dataValues.push((Math.random() * 10).toFixed(2)); // Gera valores de fluxo aleatórios entre 0 e 10 L/min
}

// Preencher a tabela com os dados
const tableBody = document.getElementById('dataGrid');
for (let i = 0; i < labels.length; i++) {
    const row = document.createElement('tr');
    const dateCell = document.createElement('td');
    const flowCell = document.createElement('td');

    dateCell.textContent = labels[i];
    flowCell.textContent = dataValues[i];

    row.appendChild(dateCell);
    row.appendChild(flowCell);
    tableBody.appendChild(row);
}

// Configuração do gráfico Chart.js
const ctx = document.getElementById('flowChart').getContext('2d');
const flowChart = new Chart(ctx, {
    type: 'line',
    data: {
        labels: labels, // Labels do eixo X (últimos 30 dias)
        datasets: [{
            label: 'Water Flow (L/min)',
            data: dataValues, // Dados de fluxo de água fictícios
            borderColor: 'rgba(75, 192, 192, 1)',
            borderWidth: 2,
            fill: false
        }]
    },
    options: {
        responsive: true,
        maintainAspectRatio: false, // Permite que o gráfico preencha o contêiner
        scales: {
            x: {
                title: {
                    display: true,
                    text: 'Date'
                }
            },
            y: {
                beginAtZero: true,
                title: {
                    display: true,
                    text: 'Flow (L/min)'
                }
            }
        }
    }
});
