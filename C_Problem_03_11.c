#include<stdio.h>
int main()
{
    int num;
    int a,b;
    scanf("%d",&num);

    a=num/10;
    b=num%10;

    if(a<=b)
    {
        printf("Success");
    }
    else
    {
        printf("Failure");
    }
    return 0;
}