//González Medina Claudia Karina

#include <stdio.h>
#define SIZE 10
int pideN();
void pideArreglo(int array[SIZE], int n);
void selectionDirect(int array[SIZE], int n);
void prinArray(int array[SIZE], int n);

int main()
{
    int laN;
    int arreglo[SIZE];
    laN=pideN();
    pideArreglo(arreglo, laN);
    selectionDirect(arreglo, laN);
    prinArray(arreglo, laN);
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
    int i;
    for(i = 0; i<=n; i++)
    {
        printf("Give me a number of fact %d: ", i);
        scanf("%d", &array[i]);
    }
}

void selectionDirect(int array[SIZE],int n)
{
    int i, m, j, t;
    for(i=n; i<n-1; i++){
    m=i;
        for(j=i+1; j<n; j++){
                if(array[j]<array[m]){
                m=j;
                t=array[i];
                }
                array[i]=array[m];
                array[m]=t;
            }
    }
}
void prinArray(int array[SIZE], int n)
{
    int m;
    for(m=0; m<n; m++)
        printf("%d ", array[m]);
    printf("\n");
}


