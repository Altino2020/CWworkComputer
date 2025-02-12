#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    char string[256];
    int i;
    for (i = 0; i < 26; i++)
        string[i] = 'A' + i;
    string[i] = NULL;
    printf("A string contém %s\n", string);
}