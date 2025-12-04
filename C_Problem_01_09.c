#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    int b=a/10;
    printf("\n%d",b%10);
    return 0;
}