//Realice un programa que calcule el número de Fibonacci de un número dado por el usuario
//González Medina Claudia Karina
#include <stdio.h>

int pidefibo();
int fibo(int n);
void muestrafibo(int fibonacci);

int main()
{
    int nt, fibon;
    nt=pidefibo();
    fibon=fibo(nt);
    muestrafibo(fibon);
}

int pidefibo()
{
    int n;
    printf("Dame a N: ");
    scanf("%d", &n);
    return(n);
}

int fibo(int n)
{
    int fibonacci;
    if(n==1)
        fibonacci=1;
    else
        if(n==2)
        fibonacci=1;
    else
        fibonacci=fibo(n-1)+fibo(n-2);
    return(fibonacci);
}

void muestrafibo(int fibonacci)
{
    printf("El fibonacci es: %d\n", fibonacci);
}
