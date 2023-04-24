#include <stdio.h>
#include "operaciones.h"
// global variable declaration
int a=1, b=2, c=3;
void printGlobalVariables()
{
    printf ("Inside the printGlobalVariables function\n");
    printf ("GLOBAL value of a = %d, b = %d and c = %d\n",a,b,c);
}

int main()
{
    int num1, num2;

    printf("num1\n");
    scanf("%d", &num1);
    printf("num2\n");
    scanf("%d", &num2);

    printf("Suma: %d", Suma(num1,num2));
    return 0;
}