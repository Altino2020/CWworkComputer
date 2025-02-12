#include <stdio.h>
int main()
{
    int anoActual, anoNascimento,idade;
    printf("Coloca o ano em que se encontra: ");
    scanf("%d", &anoActual);
    printf("Coloca o ano que nasceu: ");
    scanf("%d", &anoNascimento);
    idade= anoActual - anoNascimento;
    printf("A tua idade e: %d", idade);
}