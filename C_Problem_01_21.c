#include<stdio.h>
int main()
{
    int a,temp;
    printf("Enter the number");
    scanf("%d",&a);

    int b=a/10;
    temp=b%10;

    printf("%d",(temp%2==0)?a:(a-5));
}   