#include <stdio.h>
#define N 10
#define M 10

int pideN();
int pideM();
void capturaVecinos(int vecinos[N][M], int n, int m);
void sumaVecinos(int vecinos[N][M], int n, int m, int vecinosb[N][M]);
void muestraVecinos(int vecinosb[N][M], int n, int m);

int main()
{
    int vecinos[N][M];
    int vecinosb[N][M];
    int n, m;
    n=pideN();
    m=pideM();
    capturaVecinos(vecinos, n, m);
    printf("matriz original:\n");
    int cr, cc;
    for(cr=0; cr<n; cr++)
        for(cc=0; cc<m; cc++)
        {
            printf("%d ",vecinos[cr][cc]);
        }
        printf("\n");
    sumaVecinos(vecinos, n, m, vecinosb);
        printf("matriz vecinos:\n");
    muestraVecinos(vecinosb, n, m);
    return(0);
}

int pideN()
{
    int n;
    do{
    printf("No. of fact N: ");
    scanf("%d", &n);
    }while(n<1||n>N);
}

int pideM()
{
    int m;
    do{
    printf("No. of fact M: ");
    scanf("%d", &m);
    }while(m<1||m>M);
}

void capturaVecinos(int vecinos[N][M], int n, int m)
{
    int cr, cc;
    for(cr=0; cr<n; cr++)
        for(cc=0; cc<m; cc++)
        {
            printf("Give me a fact[%d, %d]= ", cr, cc);
            scanf("%f", &vecinos[cr][cc]);
        }
}

void sumaVecinos(int vecinos[N][M], int n, int m, int vecinosb[N][M])
{
    int cr, cc;
    for(cr=0; cr<n; cr++)
        for(cc=0; cc<m; cc++)
        {
            if(cr==0 && cc==0)
                vecinosb[cr][cc]=vecinos[cr][cc]+vecinos[cr][cc+1]+vecinos[cr+1][cc];
            if(cr==0 && cc>0 && cc<=m-2)
                vecinosb[cr][cc]=vecinos[cr][cc]+vecinos[cr][cc+1]+vecinos[cr+1][cc]+vecinos[cr][cc-1];
            if(cr==0 && cc==m-1)
                vecinosb[cr][cc]=vecinos[cr][cc]+vecinos[cr][cc-1]+vecinos[cr+1][cc];
            if(cr==n-1 && cc==0)
                vecinosb[cr][cc]=vecinos[cr][cc]+vecinos[cr-1][cc]+vecinos[cr][cc+1];
            if(cr==n-1 && cc>0 && cc<=m-2)
                vecinosb[cr][cc]=vecinos[cr][cc]+vecinos[cr][cc-1]+vecinos[cr-1][cc]+vecinos[cr][cc+1];
            if(cr==n-1 && cc==m-1)
                vecinosb[cr][cc]=vecinos[cr][cc]+vecinos[cr][cc-1]+vecinos[cr-1][cc];
            if(cc==0 && cr>0 && cr<=n-2)
                vecinosb[cr][cc]=vecinos[cr][cc]+vecinos[cr][cc+1]+vecinos[cr+1][cc]+vecinos[cr-1][cc];
            if(cc==m-1 && cr>0 && cr<=n-2)
                vecinosb[cr][cc]=vecinos[cr][cc]+vecinos[cr][cc-1]+vecinos[cr+1][cc]+vecinos[cr-1][cc];
            if(cr>0 && cr<=n-2 && cc>0 && cc<=m-2)
                vecinosb[cr][cc]=vecinos[cr][cc]+vecinos[cr][cc-1]+vecinos[cr+1][cc]+vecinos[cr-1][cc]+vecinos[cr][cc+1];
        }
}

void muestraVecinos(int vecinosb[N][M], int n, int m)
{
    int cr, cc;
    for(cr=0; cr<n; cr++)
        for(cc=0; cc<m; cc++)
        {
            printf("%d ", vecinosb[cr][cc]);
        }
        printf("\n");
}
