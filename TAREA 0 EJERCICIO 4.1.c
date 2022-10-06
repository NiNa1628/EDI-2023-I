
//González Medina Claudia Karina
#include <stdio.h>
int main()
{
int a, b, c;
    printf("Give me a fact a: ");
    scanf("%d", &a);
    printf("Give me a fact b: ");
    scanf("%d", &b);
    printf("Give me a fact c: ");
    scanf("%d", &c);
    int dup=0, res=0, mult=0;
    if(a>b)
        dup=b*2;
        printf("%d\n", dup);
    if(a<b)
        res=c-a;
        printf("%d\n",res);
    if(c<0)
        mult=c*(-1);
        printf("%d\n", mult);
}
