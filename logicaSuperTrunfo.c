#include <stdio.h>


int main() {
    unsigned int populacao1, populacao2;
    float pib1, pib2;
    char estado1[10], estado2[10], cidade1[20], cidade2[20];

    printf("====== CADASTRO DA PRIMEIRA CARTA ======\n");

// CIDADE 1
    
    printf("Digite o estado da carta (Sigla): \n");
    scanf("%s", estado1);
    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade1);
    printf("Digite a população: \n");
    scanf("%u", &populacao1);
    printf("Informe o PIB: \n");
    scanf("%f", &pib1);

    printf("====== CADASTRO DA SEGUNDA CARTA ======\n");

//CIDADE 2

    printf("Digite o estado da carta (Sigla): \n");
    scanf("%s", estado2);
    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade2);
    printf("Digite a população: \n");
    scanf("%u", &populacao2);
    printf("Informe o PIB: \n");
    scanf("%f", &pib2);
 
    if (populacao1 > populacao2){
        printf("A cidade que contém maior população é: %s\n com %u\n", cidade1, populacao1);
    } else {
        printf("A cidade que contém maior população é: %s\n com %u\n" , cidade2, populacao2);
    }
    
     if (pib1 > pib2){
        printf("A cidade que possui o maior PIB é: %s\n com o PIB equivalente a %f\n", cidade1, pib1);
    }else{
        printf("A cidade que possui o maior PIB é: %s\n com o PIB equivalente a %f\n", cidade2, pib2);
    }
    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
