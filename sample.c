#include <stdio.h>

int main()
{
    int a,b;
    float avg;
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);
    avg=(float)(a+b)/2;
    printf("The average is : %.2f",avg);

    return 0;
}
