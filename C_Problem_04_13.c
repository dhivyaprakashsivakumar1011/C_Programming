#include<stdio.h>
int main()
{
    int num;
    int rem,rev=0;
    scanf("%d",&num);

    loop:if(num>0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
        goto loop;
    }
    printf("%d",rev);
}