#include <stdio.h>
#include <string.h>
#include <locale.h>
#define N 50

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char senhaIntroduzidaPeloUtilizador[N] = {"Altino Ferreira"};
    char passWord[N];
    int ok;

    printf("Coloca o seu User name:\n\n");
    gets(passWord);

    ok = strcmp(senhaIntroduzidaPeloUtilizador, passWord);
    if (ok == 0){
        printf("Bem vindo");
    }
    else
    {
        printf("Erro - Valor introduzido inválido");
    }
}
