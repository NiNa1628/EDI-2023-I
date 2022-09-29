//González Medina Claudia Karina
#include <stdio.h>
#define ARRAY_SIZE 100

int pideN();
void MaxInt(int str[ARRAY_SIZE], int n);
int sumaPosPar(int str[ARRAY_SIZE], int n);
int sumaValPar(int str[ARRAY_SIZE], int n);
int sumaNoMayCien(int str[ARRAY_SIZE], int n);

int main()
{
      printf("Results: \n");
   int str[ARRAY_SIZE];
   int laN;
   laN=pideN();
   maxInt(str, laN);
   sumaPosPar(str, laN);
   sumaValPar(str, laN);
   sumaNoMayCien(str, laN);

   return(0);
}

int pideN()
{
   int n;
    do{
    printf("No. of fact: ");
    scanf("%d", &n);
    }while(n<1||n>ARRAY_SIZE);
    return(n);
}

void maxInt(int str[ARRAY_SIZE], int n)
{
    int cont;
    for(cont = 1; cont<=n; cont++)
    {
        printf("Give me a number of fact %d: ", cont);
        scanf("%d", &str[cont]);
    }
}

int sumaPosPar(int str[ARRAY_SIZE], int n)
{
    int counter, sumaPosPar=0;
    for(counter=1; counter <= n; counter++)
    {
        if(counter%2==0)
        sumaPosPar+=str[counter];
    }
    printf("la suma de los valores de las posiciones pares del arreglo. %d\n", sumaPosPar);
}

int sumaValPar(int str[ARRAY_SIZE], int n)
{
    int counter, sumaValPar=0;
    for(counter=1; counter <= n; counter++)
    {
        if(str[counter]%2==0)
        sumaValPar+=str[counter];
    }
    printf("la suma de los valores pares del arreglo. %d\n", sumaValPar);
}

int sumaNoMayCien(int str[ARRAY_SIZE], int n)
{
    int counter, sumaNoMayCien=0;
    for(counter=1; counter <= n; counter++)
    {
        if(sumaNoMayCien<100)
            sumaNoMayCien+=str[counter];
    }
    printf("Suma los valores en el arreglo mientras la suma no sobrepase 100 %d\n", sumaNoMayCien);
}



