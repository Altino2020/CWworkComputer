//APRESENTACAO DE TODOS OS NUMEROS ANTES DO INSERIDO
#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int valor=0;
    while(valor<=100){
        printf("%d", valor);
        valor++;
    }
}
