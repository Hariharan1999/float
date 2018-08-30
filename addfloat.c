#include<stdio.h>
int main()
{
    float a,b,sum;
    printf("Enter the value of a and b\n");
    scanf("%f%f",&a,&b);
    sum=a+b;
    printf("%f+%f=%0.2f",a,b,sum);
    return 0;
}
