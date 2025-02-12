#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "Portuguese");
    char string[256];
    int i;
    for(i=0; string[i]!=NULL; i++);
    gets(string);
    put(string);
    printf("\nO número de caractere String é %d\n", i);
}