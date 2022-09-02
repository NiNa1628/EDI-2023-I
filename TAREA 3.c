


#include <stdio.h>
int main()
{
int a = 8, b = 3, c = -5, primero, segundo, tercero, cuarto;
float x = 88, y = 3.5, z = -5.2;
int i = 8, j = 5;

primero=2 * b + 3 * (a - c);
printf("primero: %d\n", primero);

segundo=a * (c % b);
printf("segundo: %d\n", segundo);

tercero=2*y+3*(x-z);
printf("tercero: %.2f\n", tercero);

cuarto=2 * ((i / 5) + (4 * (j - 3)) % ( i + j - 2));
printf("cuarto: %d\n", cuarto);

}
