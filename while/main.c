#include <stdio.h>
#include <stdlib.h>

int main()
{
   int contador = 0;
   float n1;
   float res;

   printf("digiti um numero:");
   scanf("%f", &n1);

   while(contador <= 10) {
   res = contador * n1;
   printf("%.0f\n", res);
   contador++;
   }

    return 0;
}
