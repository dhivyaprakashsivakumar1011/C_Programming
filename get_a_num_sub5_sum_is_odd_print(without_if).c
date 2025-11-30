#include<stdio.h>
int main()
{
    int a,b,c,temp;

    scanf("%d",&a);

    b=a%10;

    c=a/100;

    printf("%d",(b%2!=0)?(c%2!=0?(a-5):a):a);
}