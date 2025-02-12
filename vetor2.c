#include <stdio.h>
int main()
{
    int v[5] = {10, 20, 13, 17, 13};
    int i;
    float s = 0;

    for(i=0; i<5; i++)
    {
        s += v[i];
    }
    printf("Resultado: %.2f\n", s/5);
}