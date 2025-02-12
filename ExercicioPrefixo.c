#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int soma=6;
    while(soma<=6 && soma>=0){
        printf("\n %d", soma);
        --soma;
    }
}