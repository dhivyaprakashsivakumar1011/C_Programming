#include<stdio.h>
int main()
{
    int i,ldigit,sum=0;
    for(i=11;i<99;i++)
    {
        ldigit=i%10;
        if(ldigit==5)
        {
            sum=sum+i;
        }
    }
    printf("%d",sum);
}