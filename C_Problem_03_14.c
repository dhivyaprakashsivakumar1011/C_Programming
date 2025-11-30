#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);

    int a,b;

    a=num%100;
    b=num/100;

    if(a==b)
    {
        printf("Success");
    }
    else
    {
        printf("Failure");
    }
    return 0;
}