#include <stdio.h>
int main(){
double renda, roubo, Nrenda;
scanf("%lf", &renda);

if (renda >= 0 && renda <= 2000.00){
    printf("isento\n");
}
if (renda >= 2000.01 && renda <= 3000.00){
    roubo = ((renda - 2000)* 0.08);
        printf("R$ %.2lf\n", roubo);
    Nrenda = renda - roubo;
        printf("R$ %.2lf\n", Nrenda);
}
if (renda >= 3000.01 && renda <= 4500.00){
    roubo = (1000 * 0.08) + ((renda - 3000) * 0.18);
        printf("R$ %.2lf\n", roubo);
    Nrenda = renda - roubo;
        printf("R$ %.2lf\n", Nrenda);
}
if (renda > 4500.00){
    roubo = (1000 * 0.08) + (1500 * 0.18) + ((renda - 4500) * 0.28);
        printf("R$ %.2lf\n", roubo);
    Nrenda = renda - roubo;
        printf("R$ %.2lf\n", Nrenda);
}


return 0;
}
