#include <stdio.h>
#include <stdlib.h>

int main() {
    float faturamento[] = {22174.1664, 24537.6698, 26139.6134, 0, 0, 26742.6612, 0, 42889.2258, 46251.174, 11191.4722, 0, 0, 3847.4823, 373.7838, 2659.7563, 48924.2448, 18419.2614, 0, 0, 35240.1826, 43829.1667, 18235.6852, 4355.0662, 13327.1025, 0, 0, 25681.8318, 1718.1221, 13220.495, 8414.61};

    float menorValor = faturamento[0], maiorValor = 0, total = 0, mediaMensal;
    int menorDia = 1, melhorDia = 1, semFaturamento = 0, diasFaturamento = 0, diasSuperior = 0;

    // Menor valor de faturamento ocorrido em um dia do mês
    for (int i = 1; i < 30; i++) {
        if (faturamento[i] > 0 && (faturamento[i] < menorValor || menorValor == 0)) {
            menorValor = faturamento[i];
            menorDia = i + 1;
        }
    }

    if (menorValor > 0) {
        printf("\nO menor valor de faturamento ocorrido neste mes foi no dia %d e o valor foi de R$ %.2f\n", menorDia, menorValor);
    }

    // Maior valor de faturamento ocorrido em um dia do mês
    for (int i = 1; i < 30; i++) {
        if (faturamento[i] > maiorValor) {
            maiorValor = faturamento[i];
            melhorDia = i + 1;
        }
    }

    printf("\nO maior valor de faturamento ocorrido neste mes foi no dia %d e o valor foi de R$ %.2f\n", melhorDia, maiorValor);

    // Número de dias no mês em que o valor de faturamento diário foi superior à média mensal
    for (int i = 0; i < 30; i++) {
        if (faturamento[i] > 0) {
            total += faturamento[i];
            diasFaturamento++;
        } else {
            semFaturamento++;
        }
    }

    mediaMensal = total / diasFaturamento;

    for (int i = 0; i < 30; i++) {
        if (faturamento[i] > mediaMensal) {
            diasSuperior++;
        }
    }

    printf("\n%d dias no mes em que o valor de faturamento diario foi superior a media mensal\n", diasSuperior);

    return 0;
}

