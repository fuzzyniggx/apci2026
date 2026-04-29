#include <stdio.h>

int main() {
    unsigned char carater_sem_sinal;
    unsigned int inteiro_sem_sinal;

    short int inteiro_curto;
    long long int inteiro_longo = 10LL;

    long double duplo_longo = 1.123456789012345678L;
    
    printf("Tamanho em bytes do 'char' = %ui\n", sizeof(char));
    printf("Tamanho em bytes do 'int' = %ui\n", sizeof(int));
    printf("Tamanho em bytes do 'short int' = %ui\n", sizeof(short int));
    printf("Tamanho em bytes do 'long int' = %ui\n", sizeof(long int));
    printf("Tamanho em bytes do 'long long int' = %ui\n", sizeof(long long int));
    printf("Tamanho em bytes do 'float' = %ui\n", sizeof(float));
    printf("Tamanho em bytes do 'double' = %ui\n", sizeof(double));
    printf("Tamanho em bytes do 'long double' = %ui\n", sizeof(long double));

    return 0;
}