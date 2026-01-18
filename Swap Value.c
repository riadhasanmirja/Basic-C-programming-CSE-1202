#include <stdio.h>
int main()
{

    int a,b;

    printf("Enter your value a :");
    scanf("%d",&a);

    printf("Enter your value b :");
    scanf("%d",&b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("Swap Value is : a = %d b = %d\n ",a,b);

    return 0;
}
