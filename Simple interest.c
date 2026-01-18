#include <stdio.h>
int main()
{
    int P, R, T, SI;

    printf("Enter Your value P, R, T: ");
    scanf("%d %d %d", &P, &R, &T);

    SI = (P * R * T) / 100;

    printf("Calculate Simple Interest: %d", SI);

    return 0;
}
