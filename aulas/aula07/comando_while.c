#include <stdio.h>

int main(){
int numero = 0;


printf("entre com um numero de 1 a 10: ");
scanf("%i", &numero);

while (numero < 1 || numero > 10){
    printf("numero invalido!Tente novamente.\n");
    scanf("%i", &numero);
    while(getchar() != '\n');
}


return 0;
}