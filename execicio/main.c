#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nu1;
    int nu2;

    printf("digite o primeiro valor: ");
    scanf("%d", &nu1);

    printf("digite o segundo valor: ");
    scanf("%d", &nu2);


    if(nu1 > nu2) {
        printf("RESULTADO: %d, o primeiro número é maior!!", nu1);
    }
    else if (nu2 > nu1) {
        printf("RESULTADO: %d, o segundo número é maior!!", nu2);
    }
    else if (nu1 == nu2) {
        printf("Escolha número diferentes!!!");
    }


    return 0;
}
