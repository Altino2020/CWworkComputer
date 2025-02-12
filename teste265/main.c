#include <stdio.h>
#include <locale.h>

void main(void){
    setlocale(LC_ALL, "Portuguese");
    int soma=0;

    while(soma<=6 || soma>=0){
        printf("%d", soma);
        soma++;
    }
}
