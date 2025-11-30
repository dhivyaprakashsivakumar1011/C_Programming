#include<stdio.h>
int main()
{
    int num=0,sum=0,i=6;
    loop:if(i>num)
    {
        sum=sum+i;
        i--;
        goto loop;
    }
    printf("%d",sum);
}