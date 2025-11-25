#include<stdio.h>
int main()
{
    int a,b,c,temp,output;
    scanf("%d",&a);

    b=a%10;
    temp=a/10;
    c=temp/10;
    temp=temp%10;
    for(int i=0;i<3;i++)
    {
        int out=b+c+temp;

        int out1=out%10;
        int out2=out/10;
        output=out1+out2;
    }
    printf("%d",output);
}
