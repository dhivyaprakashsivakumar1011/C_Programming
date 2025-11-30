#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number:");
    scanf("%d",&a);

    int temp=a%10;

    temp=temp-temp+2;
    
    a=a/10;

    int out = a*10+temp;
    printf("%d",out);
}