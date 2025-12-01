#include<stdio.h>
int main()
{
    int num,org,orgd,count=1,fdigit=0,ldigit=0,middigit,out,loopno=1;
    printf("enter the number: ");
    scanf("%d",&num);
    org=num;
    loop:if(num==0)
    {
        goto end;
    }

    count=count*10;
    num/=10;
    goto loop;

    end:{
        count=count/10;

        orgd=org/count;
    }
    

        fdigit=org/count;
        ldigit=org%10;
        middigit=org%count;
        middigit/=10;
        out=ldigit*count+middigit*10+fdigit;
    printf("%d",out);
    return 0;

}