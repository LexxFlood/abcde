#include <stdio.h>
int main(){
double renda, roubo;
scanf("%lf", &renda);

if (renda >= 0 && renda <= 2000.00){
    printf("isento\n");
}
if (renda >= 2000.01 && renda <= 3000.00){
    roubo = ((renda - 2000)* 0.08);
        printf("R$ %.2lf\n", roubo);
}
if (renda >= 3000.01 && renda <= 4500.00){
    roubo = (1000 * 0.08) + ((renda - 3000) * 0.18);
        printf("R$ %.2lf\n", roubo);
}
if (renda > 4500.00){
    roubo = (1000 * 0.08) + (1500 * 0.18) + ((renda - 4500) * 0.28);
        printf("R$ %.2lf\n", roubo);
}


return 0;
}
