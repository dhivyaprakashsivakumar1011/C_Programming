#include<stdio.h>
int main()
{
    int num=100;
    for(int i=10;i<num;i++)
    {
       int temp = i%10;
       int temp1 = i/10;
       if(i%2==0)
        {
            if(temp+temp1==6)
            {
                printf("%d\n",i);
            }
        }
    }
}
