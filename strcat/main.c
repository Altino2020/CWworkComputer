#include <stdio.h>
#include <string.h>
#include <locale.h>

#define N 20

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char s1[N] = {"Lógica de "};
    char s2[N] = {"programação"};

    printf("Antes do strcat:\n");
    puts(s1);
    puts(s2);

    strcat(s1,s2);

    printf("Depois do strcpy:\n");
    puts(s1);
}
