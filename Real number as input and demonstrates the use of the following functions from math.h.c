#include <stdio.h>
#include <math.h>

int main()
{
    double x;

    printf("Enter a real number: ");
    scanf("%lf", &x);

    printf("sqrt = %.2lf\n", sqrt(x));
    printf("pow = %.2lf\n", pow(x, 5));
    printf("ceil = %.2lf\n", ceil(x));
    printf("floor = %.2lf\n", floor(x));
    printf("fabs = %.2lf\n", fabs(x));
    printf("sin = %.2lf\n", sin(x));
    printf("cos = %.2lf\n", cos(x));
    printf("log = %.2lf\n", log(x));
    printf("exp = %.2lf\n", exp(x));

    return 0;
}
