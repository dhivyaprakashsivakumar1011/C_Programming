#include<stdio.h>
int main()
{
    int a,b,c,d,e,temp;
    scanf("%d",&a);
    d=a%10;
    e=a/10;
    e=e%10;
    temp=a/1000;
    b=a/100;
    b=b%10;

    c=b*1000+temp*100+e*10+d;

    printf("%d",c);
}