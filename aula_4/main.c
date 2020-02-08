#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1;
    float n2;
    char op;
    float res;

    printf("Entre com a equação:");
    scanf("%f %c %f", &n1, &op, &n2);

    switch(op) {
        case '+':
            res = n1 + n2;
            break;
        case '-':
            res = n1 - n2;
            break;
        case '*':
            res = n1 * n2;
            break;
        case '/':
            res = n1 / n2;
            break;
        default:
            printf("operação invalida!!!");
            return 1;
    }

    printf("O resultado foi: %.1f", res);
    return 0;
}
