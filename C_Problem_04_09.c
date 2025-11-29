
// Problem 07 and 09 are same

#include<stdio.h>
int main()
{
    int num=100;
    int i=10;
    loop:if(i<num)
    {
       int temp = i%10;
       int temp1 = i/10;
       if(i%2!=0)
        {
            if(temp+temp1==7)
            {
                printf("%d\n",i);
            }
        }
        i++;
        goto loop;
    }
}
