#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int v1;
    float res;

    printf("Digite um valor para tabuada: ");
    scanf("%d", &v1);

    for(i = 0; i <= 10; i++) {
        res = i * v1;
        printf("%.0f\n", res);
    }

    return 0;
}
