#include <stdio.h>
#include <string.h>
int main()
{
    char estado1[3], codigoDaCarta1[3], nomeDaCidade1[50];
    unsigned long int populacao1;
    float area1, pib1;
    int numeroDePontosTuristicos1;

    char estado2[3], codigoDaCarta2[3], nomeDaCidade2[50];
    unsigned long int populacao2;
    float area2, pib2;
    int numeroDePontosTuristicos2;

    float densidadePopulacional1 = populacao1 / area1;
    float pibPerCapita1 = pib1 / populacao1;
    float superPoder1 = (float)populacao1 + area1 + pib1 + numeroDePontosTuristicos1 + pibPerCapita1 + (1 / densidadePopulacional1);

    float densidadePopulacional2 = populacao2 / area2;
    float pibPerCapita2 = pib2 / populacao2;
    float superPoder2 = (float)populacao2 + area2 + pib2 + numeroDePontosTuristicos2 + pibPerCapita2 + (1 / densidadePopulacional2);

    int opcao1, opcao2; // variável utilizada  para armazenar a escolha do switch
    int resultadoComparacao1, resultadoComparacao2;

    /*----------entrada de dados da primeira carta------------*/
    printf("Escolha o Estado da primeira carta:\n(Deve ser uma letra de A a H)\n");
    scanf("%s", estado1);
    printf("Digite o código da carta:\n(Deve ser um número de 01 a 04)\n");
    scanf("%s", codigoDaCarta1);
    setbuf(stdin, 0);
    printf("Digite o nome da cidade:\n");
    fgets(nomeDaCidade1, 50, stdin);
    nomeDaCidade1[strcspn(nomeDaCidade1, "\n")] = '\0';
    printf("Digite o número de habitantes da cidade:\n");
    scanf("%lu", &populacao1);
    printf("Digite o valor da área da cidade:\n");
    scanf("%f", &area1);
    printf("Digite o valor do PIB:\n");
    scanf("%f", &pib1);
    printf("Digite a quantidade de pontos turísticos da cidade:\n");
    scanf("%d", &numeroDePontosTuristicos1);

    /*----------entrada de dados da segunda carta------------*/
    printf("Escolha o Estado da segunda carta:\n(Deve ser uma letra de A a H)\n");
    scanf("%s", estado2);
    printf("Digite o código da carta:\n(Deve ser um número de 01 a 04)\n");
    scanf("%s", codigoDaCarta2);
    setbuf(stdin, 0);
    printf("Digite o nome da cidade:\n");
    fgets(nomeDaCidade2, 50, stdin);
    nomeDaCidade2[strcspn(nomeDaCidade2, "\n")] = '\0';
    printf("Digite o número de habitantes da cidade:\n");
    scanf("%lu", &populacao2);
    printf("Digite o valor da área da cidade:\n");
    scanf("%f", &area2);
    printf("Digite o valor do PIB:\n");
    scanf("%f", &pib2);
    printf("Digite a quantidade de pontos turísticos da cidade:\n");
    scanf("%d", &numeroDePontosTuristicos2);

    printf("Carta 1\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s%s\n", estado1, codigoDaCarta1);
    printf("Nome da Cidade:%s\n", nomeDaCidade1);
    printf("População: %lu\n", populacao1);
    printf("Àrea:%0.2f km²\n", area1);
    printf("PIB:%0.2freais\n", pib1);
    printf("Número de Pontos Turísticos:%d\n", numeroDePontosTuristicos1);
    printf("Densidade populacional:%0.2fhab/km²\n", densidadePopulacional1);
    printf("Pib per capita:%0.2f reais\n", pibPerCapita1);
    printf("Super poder da carta A:%.2f\n", superPoder1);

    printf("Carta 2\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s%s\n", estado2, codigoDaCarta2);
    printf("Nome da Cidade:%s\n", nomeDaCidade2);
    printf("População: %lu\n", populacao2);
    printf("Àrea:%0.2f km²\n", area2);
    printf("PIB:%0.2freais\n", pib2);
    printf("Número de Pontos Turísticos:%d\n", numeroDePontosTuristicos2);
    printf("Densidade populacional:%0.2fhab/km²\n", densidadePopulacional2);
    printf("Pib per capita:%0.2f reais\n", pibPerCapita2);

    printf("AGORA É A HORA DA VERDADE! VAMOS VER QUAL CARTA É A GRANDE CAMPEÃ\n");
    printf("Escolha a primeira opção que você quer comparar:\n");
    printf("## 2 - População ##\n");
    printf("## 3 - Área ##\n");
    printf("## 4 - PIB ##\n");
    printf("## 5 - Número de pontos turísticos ##\n");
    printf("## 6 - Densidade populacional##\n");
    printf("Escolha:\n");
    scanf("%d", &opcao1);

    switch (opcao1)
    {
    case 2:
        printf("****Atributo escolhido: População****\n");
        printf("Cidade 1 : %s - População 1 : %lu\n", nomeDaCidade1, populacao1);
        printf("Cidade 2 : %s - População 2 : %lu\n", nomeDaCidade2, populacao2);
        resultadoComparacao1 = populacao1 > populacao2 ? 1 : 0;
        break;
    case 3:
        printf("****Atributo escolhido: Área****\n");
        printf("Cidade 1 : %s - Área 1 : %.2f\n", nomeDaCidade1, area1);
        printf("Cidade 2 : %s - População 2 : %.2f\n", nomeDaCidade2, area2);
        resultadoComparacao1 = area1 > area2 ? 1 : 0;
        break;
    case 4:
        printf("****Atributo escolhido: PIB****\n");
        printf("Cidade 1 : %s - PIB 1 : %.2f\n", nomeDaCidade1, pib1);
        printf("Cidade 2 : %s - PIB 2 : %.2f\n", nomeDaCidade2, pib2);
        resultadoComparacao1 = pib1 > pib2 ? 1 : 0;
        break;
    case 5:
        printf("****Atributo escolhido: Número de pontos turísticos****\n");
        printf("Cidade 1 : %s -  Números de pontos turísticos 1: %d\n", nomeDaCidade1, numeroDePontosTuristicos1);
        printf("Cidade 2 : %s - Número de pontos turísticos 2 : %d\n", nomeDaCidade2, numeroDePontosTuristicos2);
        resultadoComparacao1 = numeroDePontosTuristicos1 > numeroDePontosTuristicos2 ? 1 : 0;
        break;
    case 6:
        printf("Atributo escolhido: Densidade populacional\n");
        printf("Cidade 1 : %s - População 1 : %.2f\n", nomeDaCidade1, densidadePopulacional1);
        printf("Cidade 2 : %s - População 2 : %.2f\n", nomeDaCidade2, densidadePopulacional2);
        resultadoComparacao1 = densidadePopulacional1 < densidadePopulacional2 ? 1 : 0;
        break;
    default:
        printf("Opção inválida");
        break;
    }

    printf("\nEscolha a segunda opção que você quer comparar:\n");
    printf("## 2 - População ##\n");
    printf("## 3 - Área ##\n");
    printf("## 4 - PIB ##\n");
    printf("## 5 - Número de pontos turísticos ##\n");
    printf("## 6 - Densidade populacional##\n");
    printf("Escolha:\n");
    scanf("%d", &opcao2);

    if (opcao1 == opcao2)
    {
        printf("Você escolheu opções iguais para a comparação.");
        return 0;
    }
    else
    {
        switch (opcao2)
        {
        case 2:
            printf("****Atributo escolhido: População****\n");
            printf("Cidade 1 : %s - População 1 : %lu\n", nomeDaCidade1, populacao1);
            printf("Cidade 2 : %s - População 2 : %lu\n", nomeDaCidade2, populacao2);
            resultadoComparacao2 = populacao1 > populacao2 ? 1 : 0;
            break;
        case 3:
            printf("****Atributo escolhido: Área****\n");
            printf("Cidade 1 : %s - Área 1 : %.2f\n", nomeDaCidade1, area1);
            printf("Cidade 2 : %s - Área 2 : %.2f\n", nomeDaCidade2, area2);
            resultadoComparacao2 = area1 > area2 ? 1 : 0;
            break;
        case 4:
            printf("****Atributo escolhido: PIB****\n");
            printf("Cidade 1 : %s - PIB 1 : %.2f\n", nomeDaCidade1, pib1);
            printf("Cidade 2 : %s - PIB 2 : %.2f\n", nomeDaCidade2, pib2);
            resultadoComparacao2 = pib1 > pib2 ? 1 : 0;
            break;
        case 5:
            printf("****Atributo escolhido: Número de pontos turísticos****\n");
            printf("Cidade 1 : %s -  Números de pontos turísticos 1: %d\n", nomeDaCidade1, numeroDePontosTuristicos1);
            printf("Cidade 2 : %s - Número de pontos turísticos 2 : %d\n", nomeDaCidade2, numeroDePontosTuristicos2);
            resultadoComparacao2 = numeroDePontosTuristicos1 > numeroDePontosTuristicos2 ? 1 : 0;
            break;
        case 6:
            printf("Atributo escolhido: Densidade populacional\n");
            printf("Cidade 1 : %s - População 1 : %.2f\n", nomeDaCidade1, densidadePopulacional1);
            printf("Cidade 2 : %s - População 2 : %.2f\n", nomeDaCidade2, densidadePopulacional2);
            resultadoComparacao2 = densidadePopulacional1 < densidadePopulacional2 ? 1 : 0;
            break;
        default:
            printf("Opção inválida.\n");
            break;
        }
    }

    // Resultado da comparação.

    if (resultadoComparacao1 && resultadoComparacao2)
    {
        printf("A carta 1 venceu!\n");
    }
    else if (resultadoComparacao1 != resultadoComparacao2)
    {
        printf("As cartas empataram!\n");
    }
    else
    {
        printf("A carta 2 venceu!\n");
    }

    return 0;
}