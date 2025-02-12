#include <stdio.h>
int main()
{
    char d[50];

    printf("Coloca um valor para testar getf:\n");
    gets(d);
    fflush(stdin);
    puts("Resultado");
    puts(d);
    puts("");

    printf("Coloca um valor para testar getf:\n");
    fgets(d, 50, stdin);
    fflush(stdin);
    puts("Resultado");
    puts(d);
}