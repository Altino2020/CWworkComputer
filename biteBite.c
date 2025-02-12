#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    unsigned int mask= 0b00100000;
    unsigned int n;
    scanf("%d", &n);
    if ((n & mask) != 0)
    {
        printf("Valor e verdadeiro!");
    }
    else
        printf("Valor e falso!");
    
}