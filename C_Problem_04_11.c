#include<stdio.h>
int main()
{
    int num,count=0;
    printf("Enter the num:");
    scanf("%d",&num);
    loop:
        if(num==0)
        {
            goto end;
        }

        
        count++;
        num/=10;
        goto loop;

        end:printf("Count : %d",count);
}