#include<stdio.h>
int main()
{
    int num=6,sum=0,i=1;
    loop:if(i<num)
    {
        sum=sum+i;
        i++;
        goto loop;
    }
    printf("%d",sum);
}