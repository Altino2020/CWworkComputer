#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    char s[16];
    printf("Coloca o seu nome: ");
    scanf("%15[^\n]s", s);
    fflush(stdin);

    printf("Resultado: %s\n \n", s);
}