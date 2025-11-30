#include<stdio.h>
int main()
{
    int num=100,i=10,sum=0;
    loop:if(i<num)
    {
        int temp=i/10;
        if(temp==7)
        {
            if(i%2!=0)
            {
                sum=sum+i;
            }
        }
        i++;
        goto loop;
    }
    printf("%d",sum);
}