#include <stdio.h>
int main() {
    int dia;
    printf("||Coloca um dia da semana onde o numer 1 corespode ao domingo e o numero 2 corresponde ao Sabado||\n");
    scanf("%d", &dia);

    switch (dia) {
        case 1:
        printf("domingo");
        break;

        case 2:
        printf("segunda");
        break;

         case 3:
        printf("terca");
        break;

         case 4:
        printf("quarta");
        break;

         case 5:
        printf("quinta");
        break;

         case 6:
        printf("sexta");
        break;

         case 7:
        printf("Sabado");
        break;

        default:
        printf("Erro");
        break;
    }
}