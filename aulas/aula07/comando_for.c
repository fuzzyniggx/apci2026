#include <stdio.h>

int main(){
int numero = 0;
printf("entre com um numero de 1 a 10: ");
scanf("%i", &numero);

printf("a tabuada de %i:\n", numero);
printf("%i x %i = %i\n", numero, 1, numero * 1);
printf("%i x %i = %i\n", numero, 2, numero * 2);
printf("%i x %i = %i\n", numero, 3, numero * 3);
printf("%i x %i = %i\n", numero, 4, numero * 4);
printf("%i x %i = %i\n", numero, 5, numero * 5);
printf("%i x %i = %i\n", numero, 6, numero * 6);
printf("%i x %i = %i\n", numero, 7, numero * 7);
printf("%i x %i = %i\n", numero, 8, numero * 8);
printf("%i x %i = %i\n", numero, 9, numero * 9);
printf("%i x %i = %i\n", numero, 10, numero * 10);

for(int i = 1; i <= 10; i++){
    printf("%i x %i = %i\n", numero, i, numero * i);

}

for(int i = 10; i > 0; i--){

    printf("%i x %i = %i\n", numero, i, numero * i);

}

for(int i=1; i>0; i++){
printf("ao infinito e alem\n");
}


printf("\n");

return 0;
}