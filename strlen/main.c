#include <stdio.h>
#include <string.h>
#include <locale.h>

#define N 50

int main()
{
    setlocale(LC_ALL, "Portuguese");
    char s[N];
    int i;

    printf("Digite um texto:\n");
    gets(s);
    fflush(stdin);
    i = strlen(s);
    printf("Tamanho de texto: %d\n\n", i);

    printf("Impressão de cada caratere:\n\n");
    for(i=0; i<strlen(s); i++){
        printf("%c %d", s[i], i);
    }
}
