

#include <stdio.h>
int main()
{
    float a = 2.5, b = 0.0005, c = 3000.;
    printf("%.3f %.3f %.3f\n", a, b, c);
    printf("%.8f %.8f %.8f\n", a, b, c);
    printf("%8.4f %e %12e\n", a, b, c);
    printf("%g %#g %-8f\n", a, b, c);
}
