#include <stdio.h>
int main()
{

    int length,width;

    printf("Enter Your Value's :");
    scanf("%d %d",&length,&width);

    printf("Rectangle Area is %d\n",length*width);
    printf("Perimeter is %d",2*length*width);

    return 0;
}
