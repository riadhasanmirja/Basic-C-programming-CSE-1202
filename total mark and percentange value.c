
#include <stdio.h>
int main()
{

    int a,b,c,d,e;
    float percentage;

    printf("Enter Your Some Value :");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);

    printf("Total mark :%d\n",a+b+c+d+e);

    percentage = (a+b+c+d+e*100.0)/500;

    printf("Percentage value :%f",percentage);

    return 0;
}
