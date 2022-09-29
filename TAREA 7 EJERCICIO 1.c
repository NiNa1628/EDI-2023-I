//González Medina Claudia Karina
#include <stdio.h>
#define TM 100

int main()
{
    char str[TM], c;
    int counter, account=0;

    printf("Give me a phrase/string: ");
    gets(str);

    printf("Give me a caracter: ");
    scanf("%c", &c);

    for(counter=0; str[counter]!='\0'; counter++)
        if(str[counter]==c)
        account++;
    printf("Resultado: El caracter %c aparece %d veces en la cadena\n",c, account);
}

