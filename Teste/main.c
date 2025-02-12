#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    char string[] = "Cristo é o Senhor!";
    printf("%s contém %d caracter", string, strlen(string));
}
