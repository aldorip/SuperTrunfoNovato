#include <stdio.h>
#include <string.h>

// Estrutura para armazenar os dados da carta
typedef struct {
    char nomePais[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadeDemografica;
} Carta;

// Função para calcular densidade demográfica
float calcularDensidade(int populacao, float area) {
    return populacao / area;
}

// Função para exibir dados da carta
void exibirCarta(Carta c) {
    printf("País: %s\n", c.nomePais);
    printf("População: %d\n", c.populacao);
    printf("Área: %.2f km²\n", c.area);
    printf("PIB: %.2f bilhões\n", c.pib);
    printf("Pontos Turísticos: %d\n", c.pontosTuristicos);
    printf("Densidade Demográfica: %.2f hab/km²\n", c.densidadeDemografica);
    printf("--------------------------------------\n");
}

int main() {
    // Definindo duas cartas pré-cadastradas
    Carta carta1 = {"Brasil", 213000000, 8515767, 2140.0, 30};
    carta1.densidadeDemografica = calcularDensidade(carta1.populacao, carta1.area);

    Carta carta2 = {"Canadá", 38000000, 9984670, 1640.0, 25};
    carta2.densidadeDemografica = calcularDensidade(carta2.populacao, carta2.area);

    // Menu
    int opcao;

    printf("==== SUPER TRUNFO - PAÍSES ====\n\n");
    exibirCarta(carta1);
    exibirCarta(carta2);

    printf("Escolha o atributo para comparação:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Digite a opção desejada: ");
    scanf("%d", &opcao);

    printf("\nComparação entre %s e %s:\n", carta1.nomePais, carta2.nomePais);

    switch (opcao) {
        case 1: // População
            printf("Atributo: População\n");
            printf("%s: %d\n", carta1.nomePais, carta1.populacao);
            printf("%s: %d\n", carta2.nomePais, carta2.populacao);

            if (carta1.populacao > carta2.populacao) {
                printf("Resultado: %s venceu!\n", carta1.nomePais);
            } else if (carta2.populacao > carta1.populacao) {
                printf("Resultado: %s venceu!\n", carta2.nomePais);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 2: // Área
            printf("Atributo: Área\n");
            printf("%s: %.2f km²\n", carta1.nomePais, carta1.area);
            printf("%s: %.2f km²\n", carta2.nomePais, carta2.area);

            if (carta1.area > carta2.area) {
                printf("Resultado: %s venceu!\n", carta1.nomePais);
            } else if (carta2.area > carta1.area) {
                printf("Resultado: %s venceu!\n", carta2.nomePais);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 3: // PIB
            printf("Atributo: PIB\n");
            printf("%s: %.2f bilhões\n", carta1.nomePais, carta1.pib);
            printf("%s: %.2f bilhões\n", carta2.nomePais, carta2.pib);

            if (carta1.pib > carta2.pib) {
                printf("Resultado: %s venceu!\n", carta1.nomePais);
            } else if (carta2.pib > carta1.pib) {
                printf("Resultado: %s venceu!\n", carta2.nomePais);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 4: // Pontos Turísticos
            printf("Atributo: Pontos Turísticos\n");
            printf("%s: %d\n", carta1.nomePais, carta1.pontosTuristicos);
            printf("%s: %d\n", carta2.nomePais, carta2.pontosTuristicos);

            if (carta1.pontosTuristicos > carta2.pontosTuristicos) {
                printf("Resultado: %s venceu!\n", carta1.nomePais);
            } else if (carta2.pontosTuristicos > carta1.pontosTuristicos) {
                printf("Resultado: %s venceu!\n", carta2.nomePais);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 5: // Densidade Demográfica (regra invertida: menor vence)
            printf("Atributo: Densidade Demográfica\n");
            printf("%s: %.2f hab/km²\n", carta1.nomePais, carta1.densidadeDemografica);
            printf("%s: %.2f hab/km²\n", carta2.nomePais, carta2.densidadeDemografica);

            if (carta1.densidadeDemografica < carta2.densidadeDemografica) {
                printf("Resultado: %s venceu!\n", carta1.nomePais);
            } else if (carta2.densidadeDemografica < carta1.densidadeDemografica) {
                printf("Resultado: %s venceu!\n", carta2.nomePais);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        default:
            printf("Opção inválida. Por favor, escolha um número de 1 a 5.\n");
            break;
    }

    return 0;
}
