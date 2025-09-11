#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Joanirr

int main() { 


    int populacao1, populacao2, turisticos1, turisticos2, escolhainicial, resultado1, resultado2;
    float area1, area2, pib1, pib2;
    char estado1, estado2, codigo1[4], codigo2[4], cidade1[20], cidade2[20], atributo1, atributo2;

    printf("====== BEM VINDO AO JOGO SUPER TRUNFO! ======\n");
    printf("Escolha uma opção: \n");
    printf("1. Iniciar jogo.\n");
    printf("2. Como funciona o jogo?\n");
    printf("3. Sair do jogo.\n");
    printf("Escolha: \n");
    scanf("%d", &escolhainicial);

    switch (escolhainicial)
    {
    case 1:
        printf("====== CADASTRO DA PRIMEIRA CARTA ======\n");

        printf("Insira a letra que representa o estado (A-H): \n");
        scanf(" %c", &estado1);
        printf("Insira o nome da cidade: \n");
        scanf("%s", cidade1);
        printf("Insira o código da cidade (Ex: A01): \n");
        scanf("%s", codigo1);
        printf("Insira a população: \n");
        scanf("%d", &populacao1);
        printf("Insira o PIB (Em bilhões): \n");
        scanf("%f", &pib1);
        printf("Insira o número de pontos turísticos da cidade: \n");
        scanf("%d", &turisticos1);
        printf("Insira a área da cidade (Em km²): \n");
        scanf("%f", &area1);

        printf("====== CADASTRO DA SEGUNDA CARTA ======\n");

        printf("Insira a letra que representa o estado (A-H): \n");
        scanf(" %c", &estado2);
        printf("Insira o nome da cidade: \n");
        scanf("%s", cidade2);
        printf("Insira o código da cidade (Ex: A01): \n");
        scanf("%s", codigo2);
        printf("Insira a população: \n");
        scanf("%d", &populacao2);
        printf("Insira o PIB (Em bilhões): \n");
        scanf("%f", &pib2);
        printf("Insira o número de pontos turísticos da cidade: \n");
        scanf("%d", &turisticos2);
        printf("Insira a área da cidade (Em km²): \n");
        scanf("%f", &area2);
        break;
        case 2:
        printf("====== COMO FUNCIONA O JOGO ======\n");
        printf("1. O jogador irá iserir os dados das cartas manualmente (área, PIB, população, etc.)\n");
        printf("2. O jogador irá ecolher o atributo desejado para a comparação.\n");
        printf("3. Vence a carta com o maior valor no atributo escolhido, exceto para a densidade demográfica.\n");
        break;
        case 3:
        printf("Você saiu do jogo.\n");
        break;
        default:
        printf("Opção inválida!\n");
    }




    //    *** Cálculo do PIB per capita e Densidade demográfica ***

        float densidade2 = (float) populacao2 / area2;
        float densidade1 = (float) populacao1 / area1;
        float pibpercapita1 = (pib1 * 1000000000.0) / populacao1;
        float pibpercapita2 = (pib2 * 1000000000.0) / populacao2;

    //    *** Cálculo do Super Poder ***
    
        float superpoder1 = (float) populacao1 + turisticos1 + area1 + pib1 + pibpercapita1 - densidade1;
        float superpoder2 = (float) populacao2 + turisticos2 + area2 + pib2 + pibpercapita2 - densidade2;


    printf("====== COMPARAÇÃO DE ATRIBUTOS ======\n");
    printf("Escolha o primeiro atributo para comparação: \n");
    printf("A. POPULAÇÃO.\n");
    printf("B. ÁREA.\n");
    printf("C. PONTOS TURÍSTICOS.\n");
    printf("D. PIB.\n");
    printf("E. PIB PER CAPITA.\n");
    printf("F. DENSIDADE DEMOGRÁFICA.\n");
    printf("Escolha: \n");
    scanf(" %c", &atributo1);

        switch (atributo1)
        {
        case 'A':
        case 'a':
            printf("Você escolheu a opção POPULAÇÃO!\n");
            printf("%s: %d habitantes | %s: %d habitantes.\n", cidade1, populacao1, cidade2, populacao2);
            resultado1 = populacao1 > populacao2 ? 1 : 0;
            break;
        case 'B':
        case 'b':
             printf("Você escolheu a opção ÁREA!\n");
             printf("%s: %.0f km² | %s: %.0f km².\n", cidade1, area1, cidade2, area2);
             resultado1 = area1 > area2 ? 1 : 0;
            break;
        case 'C':
        case 'c':
            printf("Você escolheu a opção PONTOS TURÍSTICOS!\n");
            printf("%s: %d pontos turísticos | %s: %d pontos turísticos.\n", cidade1, turisticos1, cidade2, turisticos2);
            resultado1 = turisticos1 > turisticos2 ? 1 : 0;
            break;
        case 'D':
        case 'd':
            printf("Você escolheu a opção PIB!\n");
            printf("%s: %.0f bilhões de reais | %s: %.0f bilhões de reais.\n", cidade1, pib1, cidade2, pib2);
            resultado1 = pib1 > pib2 ? 1 : 0;    
            break;
        case 'E':
        case 'e':
            printf("Você escolheu a opção PIB PER CAPITA!\n");
            printf("%s: %.3f reais | %s: %.3f reais.\n", cidade1, pibpercapita1, cidade2, pibpercapita2);
            resultado1 = pibpercapita1 > pibpercapita2 ? 1 : 0;
            break;
        case 'F':
        case 'f':
            printf("Você escolheu a opção DENSIDADE DEMOGRÁFICA!\n");
            printf("%s: %.3f hab/km² | %s: %.3f hab/km².\n", cidade1, densidade1, cidade2, densidade2);
            resultado1 = densidade1 < densidade2 ? 1 : 0;
            break;
        default:
            printf("Opção inválida!\n");
            break;
        }

    printf("Escolha o segundo atributo para comparação: \n");
    printf("A. POPULAÇÃO.\n");
    printf("B. ÁREA.\n");
    printf("C. PONTOS TURÍSTICOS.\n");
    printf("D. PIB.\n");
    printf("E. PIB PER CAPITA.\n");
    printf("F. DENSIDADE DEMOGRÁFICA.\n");
    printf("Escolha: \n");
    scanf(" %c", &atributo2);

    if (atributo1 == atributo2)
    {
        printf("Você escolheu o mesmo atributo!\n");
    } else {
        switch (atributo2)
        {
        case 'A':
        case 'a':
            printf("Você escolheu a opção POPULAÇÃO!\n");
            printf("%s: %d habitantes | %s: %d habitantes.\n", cidade1, populacao1, cidade2, populacao2);
            resultado2 = populacao1 > populacao2 ? 1 : 0;
            break;
        case 'B':
        case 'b':
             printf("Você escolheu a opção ÁREA!\n");
             printf("%s: %.0f km² | %s: %.0f km².\n", cidade1, area1, cidade2, area2);
             resultado2 = area1 > area2 ? 1 : 0;
            break;
        case 'C':
        case 'c':
            printf("Você escolheu a opção PONTOS TURÍSTICOS!\n");
            printf("%s: %d pontos turísticos | %s: %d pontos turísticos.\n", cidade1, turisticos1, cidade2, turisticos2);
            resultado2 = turisticos1 > turisticos2 ? 1 : 0;
            break;
        case 'D':
        case 'd':
            printf("Você escolheu a opção PIB!\n");
            printf("%s: %.0f bilhões de reais | %s: %.0f bilhões de reais.\n", cidade1, pib1, cidade2, pib2);
            resultado2 = pib1 > pib2 ? 1 : 0;    
            break;
        case 'E':
        case 'e':
            printf("Você escolheu a opção PIB PER CAPITA!\n");
            printf("%s: %.3f reais | %s: %.3f reais.\n", cidade1, pibpercapita1, cidade2, pibpercapita2);
            resultado2 = pibpercapita1 > pibpercapita2 ? 1 : 0;
            break;
        case 'F':
        case 'f':
            printf("Você escolheu a opção DENSIDADE DEMOGRÁFICA!\n");
            printf("%s: %.3f hab/km² | %s: %.3f hab/km².\n", cidade1, densidade1, cidade2, densidade2);
            resultado2 = densidade1 < densidade2 ? 1 : 0;
            break;
        default:
            printf("Opção inválida!\n");
            break;
        }

        if (resultado1 && resultado2)
        {
            printf("Parabéns, você venceu!\n");
        } else if (resultado1 != resultado2){
            printf("Empatou!\n");
        } else {
            printf("Infelizmente, você perdeu!\n");
        }

    }


    return 0;
}