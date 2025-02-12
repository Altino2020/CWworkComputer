#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define N 250

int main()
{
    setlocale(LC_ALL, "Portuguese");
    char strings[N] = "Cristo é O SENHOR!";
    char uper[N];
    char lower[N];
    strcpy(uper,strings);
    printf ("%s", uper);    
    puts(uper);

}
