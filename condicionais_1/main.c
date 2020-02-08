#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade;

    printf(" Digite sua idade: ");
    scanf("%d", &idade);
    printf(" Sua idade é %d\n ", idade);

    int atual = 2020 - idade;
    int anoCorrete = 2002;

    if (atual >= anoCorrete) {
        printf("Ano que você nasceu é: %d", atual);
        printf("E você é menor de idade");
    } else {
        printf("Ano que você nasceu é: %d\n", atual);
        printf("E você é maior de idade");
    }


    return 0;
}
