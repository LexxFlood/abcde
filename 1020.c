#include <stdio.h>
int main (){
int idade, anos, meses, dias;
scanf("%d", &idade);

anos = idade/365;
idade = idade % 365;
meses = idade / 30;
dias = idade % 30;

printf("Anos: ", anos);
printf("Meses: ", meses);
printf("Dias: ", dias);

return 0;
}
