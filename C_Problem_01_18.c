#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);

    int onesdigit=num/10;
    int tensdigit=num%10;

    int out=(onesdigit-onesdigit+1)*10+tensdigit;
    printf("%d",out);
}