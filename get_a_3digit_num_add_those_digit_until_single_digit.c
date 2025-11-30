#include<stdio.h>
int main()
{
    int a;
    int temp;

    scanf("%d",&a);
    int temp1=a%10;
    temp=a/10;
    temp=temp%10;

    int out=((a/100)*100)+((temp-temp)*10)+temp1;

    printf("%d",out);
}