# 🎴 Super Trunfo - Jogo de Batalha de Cartas de Cidades

## 📋 Descrição do Projeto

Este é um programa em C que simula um jogo de cartas estilo **Super Trunfo** onde o usuário pode:

• Cadastrar duas cidades brasileiras  
• Comparar atributos diversos  
• Visualizar cálculos automáticos  
• Determinar a cidade vencedora  

## 🚀 Funcionalidades principais:

### 🎯 Cadastro de Cartas
- **Estado** (sigla)
- **Código da carta**  
- **Nome da cidade**
- **População total**
- **Área territorial**
- **PIB municipal**
- **Pontos turísticos**

### 📊 Cálculos Automáticos
- 📈 Densidade Populacional
- 💰 PIB per capita  
- 🏆 Super Poder (score geral)

## 📈 Atributos para Comparação
### 👥 População
- Regra: Maior valor vence
- Número total de habitantes da cidade

### 🗺️ Área Territorial
- Regra: Maior valor vence
- Extensão em quilômetros quadrados

### 💰 PIB (Produto Interno Bruto)
- Regra: Maior valor vence
- Valor total da economia em bilhões de reais

### 🏛️ Pontos Turísticos
- Regra: Maior valor vence
- Quantidade de atrações e monumentos

## 🧮 Atributos Calculados
### 📍 Densidade Populacional
- Regra: Menor valor vence
- População ÷ Área (hab/km²)

**⭐Dica: Cidades menos adensadas são melhores**

### 💵 PIB per Capta
- Regra: Maior valor vence
- PIB ÷ População (renda por pessoa)

### 🏆 Super Poder
- Regra: Maior valor vence
- Soma ponderada de todos os atributos
### 💻 Pré-requisitos
* Compilador GCC instalado
* Sistema operacional: Windows, Linux ou macOS


## 🔨 Exemplo de Uso
### Entrada de Dados
--- PRIMEIRA CARTA ---
- **Letra do Estado**: A
- **Código da Carta (ex: A01)**: A01
- **Nome da cidade**: São Paulo
- **População**: 12300000
- **Área (km²)**: 1521
- **PIB (bilhões de reais)**: 699.5
- **Pontos Turísticos**: 50

--- SEGUNDA CARTA ---
- **Letra do Estado**: B
- **Código da Carta (ex: B02)**: B02
- **Nome da cidade**: Rio de Janeiro
- **População**: 6748000
- **Área (km²)**: 1200
- **PIB (bilhões de reais)**: 344.5
- **Pontos Turísticos**: 40

### Saída de Dados
 **Carta 1**:
- **Estado** : S
- **Código**: S01
- **Nome da Cidade**: São Paulo
- **População**: 12300000
- **Área**: 1521.00 km²
- **PIB**: 699.50 bilhões de reais
- **Número de Pontos Turísticos**: 50
- **Densidade Populacional**: 8086.78 hab/km²
- **PIB per capta**: R$ 56870.00

**Carta 2**:
- **Estado** : R
- **Código**: R01
- **Nome da Cidade**: Rio de Janeiro
- **População**: 6748000
- **Área**: 1200.00 km²
- **PIB**: 344.50 bilhões de reais
- **Número de Pontos Turísticos**: 40
- **Densidade Populacional**: 5623.33 hab/km²
- **PIB per capta**: R$ 51060.00

=== Cartas cadastradas com sucesso! ===

- **População**: Carta 1 venceu (1)
- **Área**: Carta 1 venceu (1)
- **PIB**: Carta 1 venceu (1)
- **Pontos Turísticos**: Carta 1 venceu (1)
- **Densidade Populacional**: Carta 2 venceu (0)
- **PIB per Capta**: Carta 1 venceu (1)
- **Super Poder**: Carta 1 venceu (1)

## 🔧🎮 Como Executar e Compilar
```bash
./super_trunfo
gcc -o super_trunfo super_trunfo.c
```

# 🎴 Super Trunfo - Lógica de Comparação de Cidades

## 📋 Descrição do Projeto
Este é um programa feito em C e tem como objetivo estabelecer uma lógica ao jogo de cartas criado acima

## 🚀 Funcionalidades principais:

### 🎯 Cadastro de Cartas
- **Estado**(sigla)
- **Código da carta**  
- **Nome da cidade**
- **População total**
- **Área territorial**
- **PIB municipal**
- **Pontos turísticos**

## 🔨 Exemplo de Uso

### Entrada de Dados
--- PRIMEIRA CARTA ---
- **Letra do Estado**: A
- **Código da Carta (ex: A01)**: A01
- **Nome da cidade**: São Paulo
- **População**: 12300000
- **Área (km²)**: 1521
- **PIB (bilhões de reais)**: 699.5
- **Pontos Turísticos**: 50

--- SEGUNDA CARTA ---
- **Letra do Estado**: B
- **Código da Carta (ex: B02)**: B02
- **Nome da cidade**: Rio de Janeiro
- **População**: 6748000
- **Área (km²)**: 1200
- **PIB (bilhões de reais)**: 344.5
- **Pontos Turísticos**: 40

=== CARTAS CADASTRADAS! ===

### Saída de Dados
 === MENU DE COMPARAÇÃO - PRIMEIRO ATRIBUTO ===
- 1- População
- 2- Área
- 3- PIB
- 4- Pontos Turísticos
- 5- Densidade Populacional
- **Digite sua opção (1-5)**: 3

=== MENU DE COMPARAÇÃO - SEGUNDO ATRIBUTO ===
- 1- População
- 2- Área
- 4- Pontos Turísticos
- 5- Densidade Populacional
- **Digite sua opção**: 4

--- RESULTADO FINAL ---
### Soma dos atributos normalizados:
- **São Paulo**: 743.00 pontos
- **Rio de Janeiro**: 384.00 pontos

🎉 **RESULTADO: São Paulo (A) VENCEU!** 🎉
### Motivo: Maior soma de atributos (743.00 vs 384.00)

## 🔧🎮 Como Executar e Compilar
```bash
./super_trunfo
gcc -o super_trunfo_logica super_trunfo_logica.c
```
