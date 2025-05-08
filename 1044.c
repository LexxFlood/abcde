#include <stdio.h>
int main (){
int A, B;
scanf("%d %d", &A, &B);


if((A % 2 == 0 && B % 2 == 0)||
   (A % 3 == 0 && B % 3 == 0)||
   (A % 5 == 0 && B % 5 == 0)||
   (A % 7 == 0 && B % 7 == 0)){
    printf("São Múltiplos");
}
else{
    printf("Não são Múltiplos");
}

return 0;
}
