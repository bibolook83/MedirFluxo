import random

# Função para gerar dados aleatórios
def generate_random_data(num_entries=100):
    data = []
    for i in range(num_entries):
        # Gerar fluxo de água com alguns outliers para simular anomalias
        if random.random() < 0.95:
            flow_rate = random.uniform(10, 20)  # Dados normais
        else:
            flow_rate = random.uniform(30, 50)  # Outliers
        data.append({'flow_rate': flow_rate})
    
    # Converter para DataFrame
    df = pd.DataFrame(data)
    return df

# Atualizando a função para usar dados gerados
def get_data_from_firebase():
    return generate_random_data()  # Substituir pelo gerador de dados
