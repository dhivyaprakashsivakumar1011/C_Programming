#include<stdio.h>
int main()
{
    int num,count=2,flag=0;
    printf("Enter the num");
    scanf("%d",&num);

    if(num<=1)
    {
        printf("The num is not a prime num: %d",num);
    }
    else
    {
        loop:

            if(count==num)
            {
                goto end;
            }


            if(num%count==0)
            {
                flag=1;
                goto end;
            }
            count++;
            goto loop;
    }
    end:
        if(flag==0)
        {
            printf("%d is Prime",num);
        }
        else
        {
            printf("%d is not prime",num);
        }
}