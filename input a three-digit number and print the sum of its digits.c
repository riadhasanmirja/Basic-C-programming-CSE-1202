#include <stdio.h>
int main()
{
    int n,sum;

    printf("Enter Your Number :");
    scanf("%d",&n);

    sum = (n/100)+(n/10)%10+(n%10);

    printf("Sum of Digits =%d",sum);

    return 0;
}
