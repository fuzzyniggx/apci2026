#include <stdio.h>

int main() {

    char tecla_pressionada;   
    int numero_inteiro;
    float numero_com_seis_casas;
    double numero_com_doze_casas;

 tecla_pressionada = 'A';
 numero_inteiro = 10;
 numero_com_seis_casas = 0.123456f;
 numero_com_doze_casas = 0.123456;
    printf("==============================\n");
    printf("          NOTA LEGAL          \n");
    printf("==============================\n");
    printf("               Qtd  Valor unit\n");
    printf("Camiseta       002       39.99\n");
    printf("Calca          001       89.99\n");
    printf("Meia social    003       19.99\n");
    printf("==============================\n");
    printf("Total                   229.82\n");

    return 0;
}