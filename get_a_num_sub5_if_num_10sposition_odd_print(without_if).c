#include<stdio.h>
int main()
{
    int a,b,c,temp;
    scanf("%d",&a);

    b=a%10;
    c=a/10;
    temp=b+c;

    printf("%d",(temp%2==0)?a:(a-5));
}