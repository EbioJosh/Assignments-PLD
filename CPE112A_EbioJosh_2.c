#include <stdio.h>

void power(int x, int y, double *p2)
{
    double result = 1.0;
    int i;

    if (y >= 0) {
        for (i = 0; i < y; i++)
            result *= x;
    } else {
        for (i = 0; i < -y; i++)
            result /= x;
    }

    *p2 = result;
}

int main()
{
    int x, y;
    double p1;

    printf("Enter the base: ");
    scanf("%d", &x);
    printf("Enter the exponent: ");
    scanf("%d", &y);

    power(x, y, &p1);
    printf("%d^%d = %.2lf\n", x, y, p1);

    return 0;
}
