#include<stdio.h>
int main()
{
    int num=1;
    loop:if(num<7)
    {
        printf("%d \n",num++);
        goto loop;
    }
}