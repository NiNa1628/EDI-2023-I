//González Medina Claudia Karina
#include <stdio.h>
#define TM 100

void pideSrt(char str[]);
void cambiaPhraseMin(char str[]);
void muestraStr(char str[], int counter);

int main()
{
    char str[TM];
    int count;
    pideSrt(str);
    cambiaPhraseMin(str);
    muestraStr(str, count);
}

void pideSrt(char str[])
{
    printf("Give me a phrase/string: ");
    gets(str);
}

void cambiaPhraseMin(char str[])
{
    int counter;
    for(counter=0; str[counter]!='\0'; counter++)
    {
        if(str[counter]=='a')
                    str[counter]='A';
        else
            if(str[counter]=='A')
                    str[counter]='a';
        if(str[counter]=='e')
                    str[counter]='E';
        else
        if(str[counter]=='E')
                    str[counter]='e';
        if(str[counter]=='i')
                    str[counter]='I';
        else
            if(str[counter]=='I')
                    str[counter]='i';
        if(str[counter]=='o')
                    str[counter]='O';
        else
            if(str[counter]=='O')
                    str[counter]='o';
        if(str[counter]=='u')
                    str[counter]='U';
        else
            if(str[counter]=='U')
                    str[counter]='u';
    }
}



void muestraStr(char str[], int counter)
{
    printf("%s\n", str);
}
