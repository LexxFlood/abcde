#include <stdio.h>
int main (){
double A, B, C, perimetro, area;
scanf("%lf %lf %lf", &A, &B, &C);

if(A + B > C && A + C > B && B + C > A){
    perimetro = A + B + C;
    printf("Per�metro = %.1lf\n", perimetro);
}
else {
    area = ((A + B) * C) / 2.0;
    printf("�rea = %.1lf\n", area);
}
return 0;
}
