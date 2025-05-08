#include <stdio.h>
#include <math.h>

int main() {
    double valor;
    scanf("%lf", &valor);

    int TotalCentavos = round(valor * 100);


    int notas[] = {10000, 5000, 2000, 1000, 500, 200};
    int moedas[] = {100, 50, 25, 10, 5, 1};

    printf("NOTAS:\n");
    for (int i = 0; i < 6; i++) {
        int quantidade = TotalCentavos / notas[i];
        TotalCentavos %= notas[i];
        printf("%d nota(s) de R$ %.2f\n", quantidade, notas[i] / 100.0);
    }
    printf("MOEDAS:\n");
    for (int i = 0; i < 6; i++) {
        int quantidade = TotalCentavos / moedas[i];
        TotalCentavos %= moedas[i];
        printf("%d moeda(s) de R$ %.2f\n", quantidade, moedas[i] / 100.0);
    }

    return 0;
}
