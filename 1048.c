#include <stdio.h>
int main(){
double salario, novoSalario, Vreajuste;
int percentual;

scanf("%lf", &salario);
if(salario >= 0 && salario <= 400.00){
    percentual = 15;
}
if(salario >= 400.01 && salario <= 800.00){
    percentual = 12;
}
if(salario >= 800.01 && salario <= 1200.00){
    percentual = 10;
}
if(salario >= 1200.01 && salario <= 2000.00){
    percentual = 7;
}
if(salario > 2000.00){
    percentual = 4;
}

Vreajuste = salario * percentual/100.00;
novoSalario = Vreajuste + salario;

printf("Novo salario: %.2lf\n", novoSalario);
printf("Reajuste ganho: %.2lf\n", Vreajuste);
printf("Em percentual: %d %%\n", percentual);

 return 0;
}
