#include <stdio.h>
    #include <string.h>
    
    int main() {
    
        int Populacao1, Populacao2, PontosTuristicos1, PontosTuristicos2;
        char Estados1[3], Estados2[3];
        char Cidade1[50], Cidade2[50], CodCarta1[50], CodCarta2[50];
        float Area1, Area2, PIB1, PIB2;
    
        printf("Bem Vindo ao Super Trunfo! Escreva os dados pedidos para adicionar sua primeira carta!\n");
    
        printf("\nEstado: ");
        scanf("%2s", Estados1);
        getchar();
    
        printf("\nCidade: ");
        fgets(Cidade1, sizeof(Cidade1),stdin);
        Cidade1[strcspn(Cidade1,"\n")] = 0;
    
        printf("\nPopulação: ");
        scanf("%d", &Populacao1);
    
        printf("\nNúmero de Pontos Turísticos: ");
        scanf("%d", &PontosTuristicos1);
    
        printf("\nÁrea: ");
        scanf("%f", &Area1);
    
        printf("\nPIB: ");
        scanf("%f", &PIB1);
    
        printf("\nCódigo da Carta: ");
        scanf("%49s", CodCarta1);
        
        printf("\nVocê acaba de adicionar sua primeira carta!\n");
        printf("\nInsira mais dados para registrar uma segunda carta:\n");
    
        printf("\nEstado: ");
        scanf("%2s", Estados2);
        getchar();
        printf("\nCidade: ");
        fgets(Cidade2, sizeof(Cidade2), stdin);
        Cidade2[strcspn(Cidade2, "\n")] = 0; 
    
        printf("\nPopulação: ");
        scanf("%d", &Populacao2);
    
        printf("\nNúmero de Pontos Turísticos: ");
        scanf("%d", &PontosTuristicos2);
    
        printf("\nÁrea: ");
        scanf("%f", &Area2);
    
        printf("\nPIB: ");
        scanf("%f", &PIB2);
    
        printf("\nCódigo da Carta: ");
        scanf("%49s", CodCarta2);
        
        printf("\nParabéns, você acaba de adicionar sua segunda carta!\n");
        printf("\nInventário de Cartas:\n");
    
        // Exibição dos dados da carta
        printf("\n--- Dados da Primeira Carta ---\n");
        printf("Carta 1:\n");
        printf("Código: %s\n", CodCarta1);
        printf("Estado: %s\n", Estados1);
        printf("Cidade: %s\n", Cidade1);
        printf("População: %d\n", Populacao1);
        printf("Área: %.2f km²\n", Area1);
        printf("PIB: %.2f milhões\n", PIB1);
        printf("Número de Pontos Turísticos: %d\n", PontosTuristicos1);
        
        printf("\n--- Dados da Segunda Carta ---\n");
        printf("Carta 2:\n");
        printf("Código: %s\n", CodCarta2);
        printf("Estado: %s\n", Estados2);
        printf("Cidade: %s\n", Cidade2);
        printf("População: %d\n", Populacao2);
        printf("Área: %.2f km²\n", Area2);
        printf("PIB: %.2f milhões\n", PIB2);
        printf("Número de Pontos Turísticos: %d\n", PontosTuristicos2); 
    
    
        return 0;
    }