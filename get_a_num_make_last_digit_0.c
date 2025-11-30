#include<stdio.h>
int main()
{
    int a;
    printf("enter the number: ");
    scanf("%d",&a);
    int temp=a%10;
    a=a/10;
    a=a-a+1;
    int out=a*10+temp;
    printf("%d",out);
}