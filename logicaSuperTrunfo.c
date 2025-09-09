#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Joanirr

int main() { 


    int populacao1, populacao2, turisticos1, turisticos2, escolhainicial, atributo;
    float area1, area2, pib1, pib2;
    char estado1, estado2, codigo1[4], codigo2[4], cidade1[20], cidade2[20];

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
        float pibpercapita1 = (float) populacao1 / pib1;
        float pibpercapita2 = (float) populacao2 / pib2;

    //    *** Cálculo do Super Poder ***
    
        float superpoder1 = (float) populacao1 + turisticos1 + area1 + pib1 + pibpercapita1 - densidade1;
        float superpoder2 = (float) populacao2 + turisticos2 + area2 + pib2 + pibpercapita2 - densidade2;



 /* printf("====== DADOS DA PRIMEIRA CARTA ======\n");


    printf("Estado: %c\n", estado1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("Código da cidade: %s\n", codigo1);
    printf("População: %d\n", populacao1);
    printf("Número de pontos turísticos: %d\n", turisticos1);
    printf("Área: %.2f km².\n", area1);
    printf("PIB: %.1f bilhões de reais.\n", pib1);
    printf("Densidade demográfica: %.3f hab/km²\n", densidade1);
    printf("PIB per capita: R$ %.3f\n", pibpercapita1);


 printf("====== DADOS DA SEGUNDA CARTA ======\n");


    printf("Estado: %c\n", estado2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("Código da cidade: %s\n", codigo2);
    printf("População: %d\n", populacao2);
    printf("Número de pontos turísticos: %d\n", turisticos2);
    printf("Área: %.2f km².\n", area2);
    printf("PIB: %.1f bilhões de reais.\n", pib2);
    printf("Densidade demográfica: %.3f hab/km²\n", densidade2);
    printf("PIB per capita: R$ %.3f\n", pibpercapita2);



    printf("====== COMPARAÇÃO DE CARTAS ======\n");

    printf("População: %d\n", (populacao1 > populacao2));
    printf("Pontos turísticos: %d\n", (turisticos1 > turisticos2));
    printf("Área: %d\n", (area1 > area2));
    printf("PIB: %d\n", (pib1 > pib2));
    printf("Densidade demográfica: %d\n", (densidade1 < densidade2));
    printf("PIB per capita: %d\n", (pibpercapita1 > pibpercapita2));
    printf("Super poder: %d\n", (superpoder1 > superpoder2)); */

    printf("====== COMPARAÇÃO DE ATRIBUTOS ======\n");
    printf("Escolha um atributo para comparação: \n");
    printf("10. População.\n");
    printf("20. Área.\n");
    printf("30. Pontos turísticos.\n");
    printf("40. PIB.\n");
    printf("50. PIB per capita.\n");
    printf("60. Densidade demográfica.\n");
    printf("Escolha: \n");
    scanf("%d", &atributo);

        switch (atributo)
        {
        case 10:
            printf("%s possui %d habitantes e %s possui %d habitantes.\n", cidade1, populacao1, cidade2, populacao2);
            if (populacao1 > populacao2){ 
                 printf("%s venceu! (%d habitantes).\n", cidade1, populacao1);

            }else if (populacao1 == populacao2) { 
                printf("Houve um empate! (%s: %d habitantes) (%s: %d habitantes)\n", cidade1, populacao1, cidade2, populacao2);
            }else{
                printf("%s venceu! (%d habitantes).\n", cidade2, populacao2);
            }

            break;
        case 20:
            printf("%s possui %.0f km² e %s possui %.0f km².\n", cidade1, area1, cidade2, area2);
            if (area1 > area2){ 
                 printf("%s venceu! (%.0f km²).\n", cidade1, area1);

            }else if (area1 == area2) { 
                printf("Houve um empate! (%s: %.0f km²) (%s: %.0f km²)\n", cidade1, area1, cidade2, area2);
            }else{
                printf("%s venceu! (%.0f km²).\n", cidade2, area2);
            }
            break;
        case 30:
            printf("%s possui %d pontos turísticos e %s possui %d pontos turísticos.\n", cidade1, turisticos1, cidade2, turisticos2);
            if (turisticos1 > turisticos2){ 
                 printf("%s venceu! (%d pontos turísticos).\n", cidade1, turisticos1);

            }else if (turisticos1 == turisticos2) { 
                printf("Houve um empate! (%s: %d pontos turísticos) (%s: %d pontos turísticos)\n", cidade1, turisticos1, cidade2, turisticos2);
            }else{
                printf("%s venceu! (%d pontos turísticos).\n", cidade2, turisticos2);
            }
            break;
        case 40:
            printf("%s possui o PIB de %.0f bilhões de reais e %s possui o PIB de %.0f bilhões de reais.\n", cidade1, pib1, cidade2, pib2);
            if (pib1 > pib2){ 
                 printf("%s venceu! (%.0f bilhões de reais).\n", cidade1, pib1);

            }else if (pib1 == pib2) { 
                printf("Houve um empate! (%s: %.0f bilhões de reais) (%s: %.0f bilhões de reais)\n", cidade1, pib1, cidade2, pib2);
            }else{
                printf("%s venceu! (%.0f bilhões de reais).\n", cidade2, pib2);
            }
            break;
        case 50:
            printf("%s possui o PIB per capita de R$%.3f e %s possui o PIB per capita de R$%.3f.\n", cidade1, pibpercapita1, cidade2, pibpercapita2);
            if (pibpercapita1 > pibpercapita2){ 
                 printf("%s venceu! (R$%.3f).\n", cidade1, pibpercapita1);

            }else if (pibpercapita1 == pibpercapita2) { 
                printf("Houve um empate! (%s: R$%.3f) (%s: R$%.3f)\n", cidade1, pibpercapita1, cidade2, pibpercapita2);
            }else{
                printf("%s venceu! (R$%.3f).\n", cidade2, pibpercapita2);
            }
            break;
        case 60:
            printf("%s possui a densidade demográfica de %.3f hab/km² e %s possui a densidade demográfica de %.3f hab/km².\n", cidade1, densidade1, cidade2, densidade2);
            if (densidade1 < densidade2){ 
                 printf("%s venceu! (%.3f hab/km²).\n", cidade1, densidade1);

            }else if (densidade1 == densidade2) { 
                printf("Houve um empate! (%s: %.3f hab/km²) (%s: %.3f hab/km²)\n", cidade1, densidade1, cidade2, densidade2);
            }else{
                printf("%s venceu! (%.3f hab/km²).\n", cidade2, densidade2);
            }
            break;
        default:
            printf("Opção inválida!");
            break;
        }

    /*POPULAÇÃO
    
    if (populacao1 > populacao2){ 
        printf("%s venceu! (%d habitantes).\n", cidade1, populacao1);

    }else if (populacao1 == populacao2) { 
        printf("Houve um empate! (%s %d habitantes) (%s %d habitantes)\n", cidade1, populacao1, cidade2, populacao2);
    }else{
        printf("%s venceu! (%d habitantes).\n", cidade2, populacao2);
    }

    //PONTOS TURÍSTICOS

    if (turisticos1 > turisticos2){ 
        printf("Pontos turísticos: A cidade vencedora é %s. (com %d pontos turísticos)\n", cidade1, turisticos1);

    }else { 
        printf("Pontos turísticos: A cidade vencedora é %s. (com %d pontos turísticos)\n", cidade2, turisticos2);
    }

    //ÁREA

    if (area1 > area2){ 
        printf("Área: %s possui a maior área. (%.0f km²)\n", cidade1, area1);

    }else { 
        printf("Área: %s possui a maior área. (%.0f km²)\n", cidade2, area2);
    }

    //PIB

     if (pib1 > pib2){ 
        printf("PIB: %s possui o maior PIB. (%.0f bilhões de reais)\n", cidade1, pib1);

    }else { 
        printf("PIB: %s possui o maior PIB. (%.0f bilhões de reais)\n", cidade2, pib2);
    }

    //DENSIDADE DEMOGRÁFICA

    if (densidade1 < densidade2){ 
        printf("Densidade demográfica: %s é o vencedor, com menor densidade demográfica! (%.3f hab/km²)\n", cidade1, densidade1);

    }else { 
        printf("Densidade demográfica: %s é o vencedor, com menor densidade demográfica! (%.3f hab/km²)\n", cidade2, densidade2);
    }

    //PIB PER CAPITA

     if (pibpercapita1 > pibpercapita2){ 
        printf("PIB per capita: %s venceu! (R$ %.3f)\n", cidade1, pibpercapita1);

    }else { 
        printf("PIB per capita: %s venceu! (R$ %.3f)\n", cidade2, pibpercapita2);
    }
    */


    return 0;
}