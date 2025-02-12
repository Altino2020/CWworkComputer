#include <stdio.h>
int main()
{
    float nota;
    printf("Coloca a nota do aluno aqui: ");
    scanf("%f", &nota);

    if (nota>=13.5 && nota<=20)
    {
        printf("Transita Direto");
    }
    else if (nota<=13.5 && nota>=7)
    {
        printf("Exame");
    }
    else if (nota<7 && nota>=0)
    {
        printf("Repete o ano");
    }
    else
    {
        printf("ERRO: valor impossivel");
    }
    
}