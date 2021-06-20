#include <stdio.h>

void myFunc(int *a, int b)
{
    *a = 6;
    printf("\n");
    printf("Valor da posição a dentro da funcao: %p\n", a);
    printf("Valor de a dentro da função: %d\n", (*a));


    b = 2;
    printf("\n");
    printf("Valor da posição b dentro da funcao: %p\n", &b);
    printf("Valor de b dentro da função: %d\n", b);
}

int main(void)
{
    int a;
    int b;
    a = 3;
    b = 9;

    printf("Valor de a: %ad\n", a);
    printf("Valor de b: %d\n", b);

    printf("Posição memoria a: %p\n", &a);
    printf("Posição memoria b: %p\n", &b);
    myFunc(&a, b);

    printf("\n");
    printf("Novo Valor de a: %d\n", a);
    printf("Novo Valor de b: %d\n", b);

    char c;
    c = 'v';

    char *d;
    d = &c;

    return 0;
}