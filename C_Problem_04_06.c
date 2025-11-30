#include<stdio.h>
int main()
{
    int num=21,i=10;
    loop:if(i<num)
    {
        if(i%2!=0)
        {
            printf("%d \n",i);
        }
        i++;
        goto loop;
    }
}