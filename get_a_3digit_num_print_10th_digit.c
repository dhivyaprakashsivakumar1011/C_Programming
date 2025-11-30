#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter a number:");
    scanf("%d",&a);
    printf("The \"A\" value is:%d",a);

    b=a%10;
    int temp=a/10;
    c=temp%10;
    d=a/100;
    printf("\nThe sume of the digits is :");
    printf("%d",b+c+d);
    return 0;
}