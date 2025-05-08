#include <stdio.h>
int main (){
int quantidade, codigo;
double preco, total;

scanf("%d %d", &codigo, &quantidade);

switch(codigo){
case 1:
    preco = 4.00;
    break;
case 2:
    preco = 4.50;
    break;
case 3:
    preco = 5.00;
    break;
case 4:
    preco = 2.00;
    break;
case 5:
    preco = 1.50;
    break;
    default:
    preco = 0.00;
}
total = preco * quantidade;

printf("Total: R$ %.2lf\n", total);

return 0;
}
