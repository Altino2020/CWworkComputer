#include <stdio.h>
#include <locale.h>

void main(void){
    setlocale(LC_ALL, "Portuguese");
    int valor = 1;
    printf("Usando sufixo %d\n", valor++);
    printf("Valor após o incremento %d\n", valor);
    valor = 1;
    printf("Usando prefixo %d\n", ++valor);
    printf("Valor após o incremento %d\n", valor);
}
