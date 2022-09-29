/* CUADRADO INTEGRANDO X CON 1 Y 0
10001
01010
00100
01010
10001
González Medina Claudia Karina*/
#include <stdio.h>
int main()
{
    int n;
    printf("Give a constant: ");
    scanf("%d", &n);
        int i, j;
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=n; j++)
            {
                if(j==i||j==(n+1-i))
                printf("1 ");
                else
                printf("0 ");
            }
                printf("\n");
        }
}
