#include <stdio.h>

int main() {
    short int paises = 195;
    int idiomas = 7100;
    long long int pop_mundial = 8274065924LL;
    long double proporcao_aurea = 1.61803398874989484820L;

    printf("Paises: %hd\n", paises);
    printf("Idiomas: %d\n", idiomas);
    printf("Populacao: %lld\n", pop_mundial);
    printf("Proporcao: %.20Lf\n", proporcao_aurea);

    return 0;
}