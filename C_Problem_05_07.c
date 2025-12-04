#include<stdio.h>
int main()
{
    int i,fdigit,ldigit,sum=0;
    for(i=11;i<99;i++)
    {
        fdigit=i/10;
        ldigit=i%10;
        if(i%2!=0)
        {
            if(fdigit+ldigit==7)
            {
                printf("%d\n",i);
            }
        }
    }   
}