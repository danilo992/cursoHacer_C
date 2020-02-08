#include <stdio.h>
#include <stdlib.h>

int main()
{
    int entrada;
    printf("Digite um valor:");
    scanf("%d", &entrada);
    entrada++;
    printf("você digitou: %d\n", entrada);

    int inteiro = 100;
    float decimal = 70.48;
    double valor = 23.33;
    char caracter = 'i';

    printf("%d\n", inteiro);
    printf("%.2f\n", decimal);
    printf("%.3f\n", valor);
    printf("%c", caracter);

    return 0;
}
