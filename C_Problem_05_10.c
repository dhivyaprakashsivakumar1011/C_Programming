#include<stdio.h>
int main()
{
    int i,sum=0,ldigit;
    for(i=11;i<99;i++)
    {
        ldigit=i/10;
        if(ldigit==7)
        {
            if(i%2!=0)
            {
                sum=sum+i;
            }
        }
    }
    printf("%d",sum);
}