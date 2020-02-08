#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1;
    float num2;
    char oper;
    float result;

    printf("Primeira valor:");
    scanf("%f", &num1);

    printf("operção:");
    scanf(" %c", &oper);

    printf("Segundo Valor:");
    scanf("%f", &num2);

    switch (oper) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = num1 / num2;
            break;
        default:
            printf("Operação invalida");
        return 1;

    }

    //if (oper == '+') {
    //    result = num1 + num2;
    //}
    //else if (oper == '-') {
    //    result = num1 - num2;
    //}
    //else if (oper == '*') {
    //    result = num1 * num2;
    //}
    //else if (oper == '/') {
    //    result = num1 / num2;
    //}
    //else {
    //    printf("Operação invalida");
    //    return 1;
    //}

    printf("O resultado foi: %.1f\n", result);
    return 0;
}
