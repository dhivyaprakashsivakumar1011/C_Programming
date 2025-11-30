#include<stdio.h>
int main()
{
    int num,count=0;
    printf("Enter the num:");
    
    loop:scanf("%d",&num);
        if(num==0)
        {
            goto end;
        }

        count++;
        goto loop;

        end:printf("%d",count);
}