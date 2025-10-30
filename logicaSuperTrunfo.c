#include <stdio.h>

// Desafio Super Trunfo - Países
// Nível Mestre - Batalha de Cartas

//Iniciando programa
int main() {

    //Definindo as variaveis para a carta número 1 e 2
    char estadoCarta_1[15], estadoCarta_2[15];
    char codigoCarta_1[10], codigoCarta_2[10];
    char cidadeCarta_1[15], cidadeCarta_2[15];
    int populacaoCarta_1, populacaoCarta_2; // agora unsigned long int
    float areaCarta_1, areaCarta_2;
    float pibCarta_1, pibCarta_2;
    int qtdPontosTuristicosCarta_1, qtdPontosTuristicosCarta_2; 
    float densidadePopulacionalC_1, densidadePopulacionalC_2;
    float pbiPCapita_1, pbiPCapita_2;
    float superPoder_1, superPoder_2;

    // Cadastro da Carta 1:
    printf("----Cadastro de informações da carta número 1----\n");
    printf("Digite o estado da carta: \n");
    scanf(" %[^\n]", estadoCarta_1);
    printf("Digite o codigo da carta: \n");
    scanf(" %s", codigoCarta_1);
    printf("Digite a cidade: \n");
    scanf(" %[^\n]", cidadeCarta_1);
    printf("Digite a população da cidade: \n");
    scanf(" %d", &populacaoCarta_1);
    printf("Digite a área (em km²): \n");
    scanf(" %f", &areaCarta_1);
    printf("Digite o PIB da cidade: \n");
    scanf(" %f", &pibCarta_1);
    printf("Digite a quantidade de pontos turisticos da cidade: \n");
    scanf(" %d", &qtdPontosTuristicosCarta_1);

    //Cadastro da Carta 2:
    printf("----Cadastro de informações da carta número 2----\n");
    printf("Digite o estado da carta: \n");
    scanf(" %[^\n]", estadoCarta_2);
    printf("Digite o codigo da carta: \n");
    scanf(" %s", codigoCarta_2);
    printf("Digite a cidade: \n");
    scanf(" %[^\n]", cidadeCarta_2);
    printf("Digite a população da cidade: \n");
    scanf(" %d", &populacaoCarta_2);
    printf("Digite a área (em km²): \n");
    scanf(" %f", &areaCarta_2);
    printf("Digite o PIB da cidade: \n");
    scanf(" %f", &pibCarta_2);
    printf("Digite a quantidade de pontos turisticos da cidade: \n");
    scanf(" %d", &qtdPontosTuristicosCarta_2);

    // cálculos
    densidadePopulacionalC_1 = (float) populacaoCarta_1 / areaCarta_1;
    densidadePopulacionalC_2 = (float) populacaoCarta_2 / areaCarta_2;

    pbiPCapita_1 = (float) pibCarta_1 / populacaoCarta_1;
    pbiPCapita_2 = (float) pibCarta_2 / populacaoCarta_2;

    superPoder_1 = (float) populacaoCarta_1 + areaCarta_1 + pibCarta_1 + qtdPontosTuristicosCarta_1 + pbiPCapita_1 + (1.0f / densidadePopulacionalC_1);
    superPoder_2 = (float) populacaoCarta_2 + areaCarta_2 + pibCarta_2 + qtdPontosTuristicosCarta_2 + pbiPCapita_2 + (1.0f / densidadePopulacionalC_2);

    // apresentação das cartas
    printf("----------------- Carta 1 -----------------\n");
    printf("Estado: %s\n", estadoCarta_1);
    printf("Código: %s\n", codigoCarta_1);
    printf("Nome da Cidade: %s\n", cidadeCarta_1);
    printf("População: %d\n", populacaoCarta_1);
    printf("Área: %.2f km²\n", areaCarta_1);
    printf("PIB: %.2f de Reais\n", pibCarta_1);
    printf("Número de Pontos Turísticos: %d\n", qtdPontosTuristicosCarta_1);
    printf("Densidade Populacional: %.2f\n", densidadePopulacionalC_1);
    printf("PIB per Capita: %.2f de Reais\n", pbiPCapita_1);
    printf("Super Poder: %.2f\n", superPoder_1);

    printf("----------------- Carta 2 -----------------\n");
    printf("Estado: %s\n", estadoCarta_2);
    printf("Código: %s\n", codigoCarta_2);
    printf("Nome da Cidade: %s\n", cidadeCarta_2);
    printf("População: %d\n", populacaoCarta_2);
    printf("Área: %.2f km²\n", areaCarta_2);
    printf("PIB: %.2f de Reais\n", pibCarta_2);
    printf("Número de Pontos Turísticos: %d\n", qtdPontosTuristicosCarta_2);
    printf("Densidade Populacional: %.2f\n", densidadePopulacionalC_2);
    printf("PIB per Capita: %.2f de Reais\n", pbiPCapita_2);
    printf("Super Poder: %.2f\n", superPoder_2);
    
    //criando variavel para opção de atributo e soma
    int primeiroAtributo, segundoAtributo;
    int pontosCarta_1 = 0, pontosCarta_2 = 0;
    int somaCarta_1 = 0, somaCarta_2 = 0;

    //menu com as opções 
    printf("\nEscolha uma opção de comparação para o primeiro atributo!:\n");
    printf("1. Comparação de Atributo: População\n");
    printf("2. Comparação de Atributo: Área\n");
    printf("3. Comparação de Atributo: PIB\n");
    printf("4. Comparação de Atributo: Pontos Turísticos\n");
    printf("5. Comparação de Atributo: Densidade Populacional\n");
    printf("6. Comparação de Atributo: PIB per Capita\n");
    printf("7. Comparação de Atributo: Super Poder\n");
    //recebe a opção
    scanf(" %d", &primeiroAtributo);
    
    // Comparação das cartas
    printf("\n------ Comparação de Cartas ------\n");
    
    switch (primeiroAtributo) {
        
        case 1:
            // --- POPULAÇÃO ---
            printf("\nComparação de cartas (Atributo: População):\n");
            printf("População carta 1: %d  -  População carta 2: %d\n", populacaoCarta_1, populacaoCarta_2);
            populacaoCarta_1 > populacaoCarta_2 ? pontosCarta_1++ : pontosCarta_2++;
            populacaoCarta_1 > populacaoCarta_2 ? printf("A carta 1 venceu nesse atríbuto!!") : printf("A carta 2 venceu nesse atríbuto!!");
            somaCarta_1 += populacaoCarta_1; somaCarta_2 += populacaoCarta_2;
            break;

        case 2:
            // --- ÁREA ---
            printf("\nComparação de cartas (Atributo: Área):\n");
            printf("Área carta 1: %.2f  -  Área carta 2: %.2f\n", areaCarta_1, areaCarta_2);
            areaCarta_1 > areaCarta_2 ? pontosCarta_1++ : pontosCarta_2++;
            areaCarta_1 > areaCarta_2 ? printf("A carta 1 venceu nesse atríbuto!!") : printf("A carta 2 venceu nesse atríbuto!!");
            somaCarta_1 += areaCarta_1; somaCarta_2 += areaCarta_2;
            break;

        case 3:
            // --- PIB ---
            printf("\nComparação de cartas (Atributo: PIB):\n");
            printf("PIB carta 1: %.2f  -  PIB carta 2: %.2f\n", pibCarta_1, pibCarta_2);
            pibCarta_1 > pibCarta_2 ? pontosCarta_1++ : pontosCarta_2++;
            pibCarta_1 > pibCarta_2 ? printf("A carta 1 venceu nesse atríbuto!!") : printf("A carta 2 venceu nesse atríbuto!!");
            somaCarta_1 += pibCarta_1; somaCarta_2 += pibCarta_2;
            break;

        case 4:
            // --- PONTOS TURÍSTICOS ---
            printf("\nComparação de cartas (Atributo: Pontos Turísticos):\n");
            printf("Pontos turísticos carta 1: %d  -  Pontos turísticos carta 2: %d\n", qtdPontosTuristicosCarta_1, qtdPontosTuristicosCarta_2);
            qtdPontosTuristicosCarta_1 > qtdPontosTuristicosCarta_2 ? pontosCarta_1++ : pontosCarta_2++;
            qtdPontosTuristicosCarta_1 > qtdPontosTuristicosCarta_2 ? printf("A carta 1 venceu nesse atríbuto!!") : printf("A carta 2 venceu nesse atríbuto!!");
            somaCarta_1 += qtdPontosTuristicosCarta_1; somaCarta_2 += qtdPontosTuristicosCarta_2;
            break;

        case 5:
            // --- DENSIDADE POPULACIONAL (menor vence) ---
            printf("\nComparação de cartas (Atributo: Densidade Populacional):\n");
            printf("Densidade Populacional carta 1: %.2f  -  Densidade Populacional carta 2: %.2f\n", densidadePopulacionalC_1, densidadePopulacionalC_2);
            densidadePopulacionalC_1 < densidadePopulacionalC_2 ? pontosCarta_1++ : pontosCarta_2++;
            densidadePopulacionalC_1 < densidadePopulacionalC_2 ? printf("A carta 1 venceu nesse atríbuto!!") : printf("A carta 2 venceu nesse atríbuto!!");
            somaCarta_1 += (1.0f / densidadePopulacionalC_1); somaCarta_2 += (1.0f / densidadePopulacionalC_2);
            break;
        
        case 6:
            // --- PIB PER CAPITA ---
            printf("\nComparação de cartas (Atributo: PIB per Capita):\n");
            printf("PIB per Capita carta 1: %.2f  -  PIB per Capita carta 2: %.2f\n", pbiPCapita_1, pbiPCapita_2);
            pbiPCapita_1 > pbiPCapita_2 ? pontosCarta_1++ : pontosCarta_2++;
            pbiPCapita_1 > pbiPCapita_2 ? printf("A carta 1 venceu nesse atríbuto!!") : printf("A carta 2 venceu nesse atríbuto!!");
            somaCarta_1 += pbiPCapita_1; somaCarta_2 += pbiPCapita_2;
            break;

        case 7:    
            // --- SUPER PODER ---
            printf("\nComparação de cartas (Atributo: Super Poder):\n");
            printf("Super Poder carta 1: %.2f  -  Super Poder carta 2: %.2f\n", superPoder_1, superPoder_2);
            superPoder_1 > superPoder_2 ? pontosCarta_1++ : pontosCarta_2++;
            superPoder_1 > superPoder_2 ? printf("A carta 1 venceu nesse atríbuto!!") : printf("A carta 2 venceu nesse atríbuto!!");
            somaCarta_1 += superPoder_1; somaCarta_2 += superPoder_2;
            break;
    }


     //menu com as opções para selecionar o segundo atributo
    printf("\nEscolha uma opção de comparação para o segundo atributo!:\n");
    printf("1. Comparação de Atributo: População\n");
    printf("2. Comparação de Atributo: Área\n");
    printf("3. Comparação de Atributo: PIB\n");
    printf("4. Comparação de Atributo: Pontos Turísticos\n");
    printf("5. Comparação de Atributo: Densidade Populacional\n");
    printf("6. Comparação de Atributo: PIB per Capita\n");
    printf("7. Comparação de Atributo: Super Poder\n");
    //recebe a opção
    scanf(" %d", &segundoAtributo);

    //comparação do segundo atributo
    if (segundoAtributo == primeiroAtributo) {
        printf("Você escolheu o mesmo atributo!");
    } else {
        switch(segundoAtributo) {

        case 1:
            // --- POPULAÇÃO ---
            printf("\nComparação de cartas (Atributo: População):\n");
            printf("População carta 1: %d  -  População carta 2: %d\n", populacaoCarta_1, populacaoCarta_2);
            populacaoCarta_1 > populacaoCarta_2 ? pontosCarta_1++ : pontosCarta_2++;
            populacaoCarta_1 > populacaoCarta_2 ? printf("A carta 1 venceu nesse atríbuto!!") : printf("A carta 2 venceu nesse atríbuto!!");
            somaCarta_1 += populacaoCarta_1; somaCarta_2 += populacaoCarta_2;
            break;

        case 2:
            // --- ÁREA ---
            printf("\nComparação de cartas (Atributo: Área):\n");
            printf("Área carta 1: %.2f  -  Área carta 2: %.2f\n", areaCarta_1, areaCarta_2);
            areaCarta_1 > areaCarta_2 ? pontosCarta_1++ : pontosCarta_2++;
            areaCarta_1 > areaCarta_2 ? printf("A carta 1 venceu nesse atríbuto!!") : printf("A carta 2 venceu nesse atríbuto!!");
            somaCarta_1 += areaCarta_1; somaCarta_2 += areaCarta_2;
            break;

        case 3:
            // --- PIB ---
            printf("\nComparação de cartas (Atributo: PIB):\n");
            printf("PIB carta 1: %.2f  -  PIB carta 2: %.2f\n", pibCarta_1, pibCarta_2);
            pibCarta_1 > pibCarta_2 ? pontosCarta_1++ : pontosCarta_2++;
            pibCarta_1 > pibCarta_2 ? printf("A carta 1 venceu nesse atríbuto!!") : printf("A carta 2 venceu nesse atríbuto!!");
            somaCarta_1 += pibCarta_1; somaCarta_2 += pibCarta_2;
            break;

        case 4:
            // --- PONTOS TURÍSTICOS ---
            printf("\nComparação de cartas (Atributo: Pontos Turísticos):\n");
            printf("Pontos turísticos carta 1: %d  -  Pontos turísticos carta 2: %d\n", qtdPontosTuristicosCarta_1, qtdPontosTuristicosCarta_2);
            qtdPontosTuristicosCarta_1 > qtdPontosTuristicosCarta_2 ? pontosCarta_1++ : pontosCarta_2++;
            qtdPontosTuristicosCarta_1 > qtdPontosTuristicosCarta_2 ? printf("A carta 1 venceu nesse atríbuto!!") : printf("A carta 2 venceu nesse atríbuto!!");
            somaCarta_1 += qtdPontosTuristicosCarta_1; somaCarta_2 += qtdPontosTuristicosCarta_2;
            break;

        case 5:
            // --- DENSIDADE POPULACIONAL (menor vence) ---
            printf("\nComparação de cartas (Atributo: Densidade Populacional):\n");
            printf("Densidade Populacional carta 1: %.2f  -  Densidade Populacional carta 2: %.2f\n", densidadePopulacionalC_1, densidadePopulacionalC_2);
            densidadePopulacionalC_1 < densidadePopulacionalC_2 ? pontosCarta_1++ : pontosCarta_2++;
            densidadePopulacionalC_1 < densidadePopulacionalC_2 ? printf("A carta 1 venceu nesse atríbuto!!") : printf("A carta 2 venceu nesse atríbuto!!");
            somaCarta_1 += (1.0f / densidadePopulacionalC_1); somaCarta_2 += (1.0f / densidadePopulacionalC_2);
            break;
        
        case 6:
            // --- PIB PER CAPITA ---
            printf("\nComparação de cartas (Atributo: PIB per Capita):\n");
            printf("PIB per Capita carta 1: %.2f  -  PIB per Capita carta 2: %.2f\n", pbiPCapita_1, pbiPCapita_2);
            pbiPCapita_1 > pbiPCapita_2 ? pontosCarta_1++ : pontosCarta_2++;
            pbiPCapita_1 > pbiPCapita_2 ? printf("A carta 1 venceu nesse atríbuto!!") : printf("A carta 2 venceu nesse atríbuto!!");
            somaCarta_1 += pbiPCapita_1; somaCarta_2 += pbiPCapita_2;
            break;

        case 7:    
            // --- SUPER PODER ---
            printf("\nComparação de cartas (Atributo: Super Poder):\n");
            printf("Super Poder carta 1: %.2f  -  Super Poder carta 2: %.2f\n", superPoder_1, superPoder_2);
            superPoder_1 > superPoder_2 ? pontosCarta_1++ : pontosCarta_2++;
            superPoder_1 > superPoder_2 ? printf("A carta 1 venceu nesse atríbuto!!") : printf("A carta 2 venceu nesse atríbuto!!");
            somaCarta_1 += superPoder_1; somaCarta_2 += superPoder_2;
            break;
        }
    
    //Exibe os resultados finais
    printf("\n------ Resultado da rodada ------\n");
    printf("Soma dos atributos - Carta 1: %d, Carta 2: %d\n", somaCarta_1, somaCarta_2);
    if (somaCarta_1 > somaCarta_2) {
        printf("A carta 1 foi a vencedora pela soma dos atributos!\n");
    } else if (somaCarta_2 > somaCarta_1) {
        printf("A carta 2 foi a vencedora pela soma dos atributos!\n");
    } else {
        printf("Empate pela soma dos atributos!\n");
    }


    if (pontosCarta_1 > pontosCarta_2) {
        printf("A carta 1 foi a grande ganhadora!!\n");
    } else if (pontosCarta_2 > pontosCarta_1) {
        printf("A carta 2 foi a grande ganhadora!!\n");
    } else {
        printf("Foi empate, melhor jogarmos novamente!!\n");
    }

    }
    return 0;
}