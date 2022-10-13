//González Medina Claudia Karina

#include <stdio.h>
#define SIZE 10
int pideN();
void pideArreglo(int array[SIZE], int n);
void bubble(int array[SIZE], int n);
void bubbleOptimate(int array[SIZE], int n);
void printArray(int array[SIZE]);

int main()
{
    int laN;
    int arreglo[SIZE];
    laN=pideN();
    pideArreglo(arreglo, laN);
    bubble(arreglo, laN);
    bubbleOptimate(arreglo, laN);
    printArray(arreglo);
}

int pideN()
{
    int n;
    do{
    printf("No. of fact: ");
    scanf("%d", &n);
    }while(n<1||n>SIZE);
    return(n);
}

void pideArreglo(int array[SIZE], int n)
{
    int cont;
    for(cont = 0; cont<=n; cont++)
    {
        printf("Give me a number of fact %d: ", cont);
        scanf("%d", &array[cont]);
    }
}

void bubble(int array[SIZE],int n)
{
    int ref, remain, run, tmp;
    for(ref=n-1; ref<n-1; ref++)
    {
        remain=ref;
        for(run=ref+1; run<n; run++)
            {
                if(array[run]<array[remain])
                remain=run;
            tmp=array[ref];
            array[ref]=array[remain];
            array[remain]=tmp;
            }
    }
}

void printArray(int array[SIZE])
{
    int i;
    for(i=0; i<SIZE; i++)
        printf("%d ", array[i]);
    printf("\n");
}

void bubbleOptimate(int array[SIZE], int n)
{
    int ref, remain, run, tmp;
    for(ref=n-1; ref<n-1; ref++)
    {
        remain=ref;
        for(run=ref+1; run<n; run++)
            {
                if(array[run]<array[remain])
                remain=run;
                else
                run=n;
            tmp=array[ref];
            array[ref]=array[remain];
            array[remain]=tmp;
            }
    }
}
