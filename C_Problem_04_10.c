#include<stdio.h>
int main()
{
    int num=100,i,sum=0;
    for(i=10;i<num;i++)
    {
        int temp=i/10;
        if(temp==7)
        {
            if(i%2!=0)
            {
                sum=sum+i;
            }
        }
    }
    printf("%d",sum);
}