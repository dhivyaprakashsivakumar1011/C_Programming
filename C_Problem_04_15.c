#include<stdio.h>
int main()
{
    int num,numorg,ldigit,fdigit,mdigit,out,count=1;
    printf("Enter the num: ");
    scanf("%d",&num);
    numorg=num;
    ldigit=num%10;
    loop:if(num==0)
    {
        goto end;
    }
        count=count*10;
        num=num/10;
        goto loop;
    end:
        count=count/10;
        if(ldigit%2==0)
        {
            printf("The last digit is even %d",numorg);
        }
        else
        {
            fdigit=numorg/count;
            mdigit=numorg%count;
            out=(fdigit-1)*count+mdigit;
            printf("\n%d %d %d",out,mdigit,fdigit);
        }
    return 0;

}