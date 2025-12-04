#include<stdio.h>
int main()
{
    int i,fdigit,ldigit;
    for(i=11;i<99;i++)
    {
        ldigit=i%10;
        fdigit=i/10;
        if(i%2==0)
        {
            if((fdigit+ldigit)==6)
            {
                printf("%d\n",i);
            }
        }
    }
}