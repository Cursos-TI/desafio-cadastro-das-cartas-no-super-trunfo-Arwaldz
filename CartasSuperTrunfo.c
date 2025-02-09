#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    int codigo, populacao, pontos_turisticos;
    char nome[50];
    float area, pib;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    // Cadastro das cartas
    printf("Cadastro da Cidade\n");

    //Código da cidade
    printf("Digite o código da cidade: ");
    scanf("%d, &codigo);

    //Nome da cidade
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome;)

    //População da cidade
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao);
    
    //Área da cidade
    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area);

    //PIB da cidade
    printf("Digite o PIB da cidade (em milhões): ");
    scanf("%f", &pib);

    //Número de pontos turísticos
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos);
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("\nDados da Cidade Cadastrada:\n");
    printf("Código: %d\n", codigo);
    printf("Nome: %s\n", nome);
    printf("População: %d habitantes\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f milhões\n", pib);
    printf("Pontos Turísticos: %d\n", pontos_turisticos);

    return 0;
}
