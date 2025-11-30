#include<stdio.h>
int main()
{
    int num=5;
    loop:if(num>0)
    {
        printf("%d \n",num--);
        goto loop;
    }
} 