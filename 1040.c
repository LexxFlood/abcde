#include <stdio.h>
int main() {
double N1, N2, N3, N4, Media, exame, MediaFinal;
double resultado1, resultado2, resultado3, resultado4;
int peso2, peso3, peso4, peso1;

scanf("%lf %lf %lf %lf", &N1, &N2, &N3, &N4);

peso2 = 2, peso3 = 3, peso4 = 4, peso1 = 1;

resultado1 = N1 * peso2;
resultado2 = N2 * peso3;
resultado3 = N3 * peso4;
resultado4 = N4 * peso1;

Media = (resultado1 + resultado2 + resultado3 + resultado4)/10;
printf("Media: %.1lf\n", Media);

if (Media >= 7.0) {
    printf("Aluno aprovado.\n");

} else if (Media < 5.0) {
    printf("Aluno reprovado.\n");

} else {
    printf("Aluno em exame.\n");
    scanf("%lf", &exame);
    printf("Nota do exame: %.1lf\n", exame);

    MediaFinal = (Media + exame) / 2.0;

if (MediaFinal >= 5.0) {
    printf("Aluno aprovado.\n");
} else {
    printf("Aluno reprovado.\n");
}

    printf("Media final: %.1lf\n", MediaFinal);
}

return 0;
}
