#include<stdio.h>
int main()
{
    int num,count=1;
    printf("enter the number: ");
    scanf("%d",&num);

    loop:if(num==0)
    {
        goto end;
    }

    count=count*10;
    num/=10;
    goto loop;

    end:{
        count=count/10;

        num=num/count;
    }
    printf("%d",num);

    return 0;

}