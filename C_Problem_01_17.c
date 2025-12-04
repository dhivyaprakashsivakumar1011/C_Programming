#include<stdio.h>
int main()
{
    int a,out;
    printf("Enter the number:");
    scanf("%d",&a);
    printf("%d",out=(a%2!=0)?(a-5):a);
}