//González Medina Claudia Karina

#include <stdio.h>
#define SIZE 99
int pideN();
int pideM();
void pideArreglo(int array[SIZE], int n);
void pideArreglob(int arrayb[SIZE], int m);
void ordenation(int array[SIZE], int arrayb[SIZE], int arrayc[SIZE], int m, int n);
void printOrd(int arrayc[SIZE], int n, int m);

int main()
{
    int laN;
    int laM;
    int i;
    int arreglo[SIZE];
    int arreglob[SIZE];
    int arregloc[SIZE];
    laN=pideN();
    laM=pideM();
    pideArreglo(arreglo, laN);
    pideArreglob(arreglob, laM);
    ordenation(arreglo, arreglob, arregloc, laN, laM);
    printOrd(arregloc, laN, laM);
}

int pideN()
{
    int n;
    printf("Nums1: (array1) ");
    do{
    printf("No. of fact: ");
    scanf("%d", &n);
    }while(n<0||n>SIZE);
    return(n);
}

void pideArreglo(int array[SIZE], int n)
{
    int cont;
    if(n==0)
        printf("[]\n");
    else{
    for(cont = 1; cont<=n; cont++)
    {
        printf("Give me a number of fact %d: ", cont);
        scanf("%d", &array[cont]);
    }
    }
}

int pideM()
{
    int m;
    printf("Nums2: (array2) ");
    do{
    printf("No. of fact: ");
    scanf("%d", &m);
    }while(m<0||m>SIZE);
    return(m);
}

void pideArreglob(int arrayb[SIZE], int m)
{
    int cont;
    if(m==0)
        printf("[]\n");
    else{
    for(cont = 1; cont<=m; cont++)
    {
        printf("Give me a number of fact %d: ", cont);
        scanf("%d", &arrayb[cont]);
    }
    }
}

void ordenation(int array[SIZE], int arrayb[SIZE], int arrayc[SIZE], int m, int n)
{
    int cont, i;
    i=m+n;
    printf("%d\n", i);
    if(array[cont]==0)
        printf(" ");
    else
        if(arrayb[cont]==0)
            printf(" ");
        else
        {
            for(cont=1; cont<i; cont++)
            {
            if(array[cont]<arrayb[cont])
                arrayc[cont]<-array[cont];
            else
                arrayc[cont]<-arrayb[cont];
            }
        }
}

void printOrd(int arrayc[SIZE], int n, int m)
{
    int cont;
    for (cont=1; cont<m+n; cont++)
    {
        printf("%d ", arrayc[cont]);
    }
    printf("\n");
}
