#include <stdio.h>
int main() {
    int i=1;
    int dado = 0;
    while (i<=4)
    {
        dado+=i*i;
        i++;
    }
    
    printf("%d", dado);
}