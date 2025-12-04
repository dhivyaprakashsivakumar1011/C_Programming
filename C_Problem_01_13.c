#include<stdio.h>
int main()
{
    int a,rem,mid,quotient;
    printf("Enter a number:");
    scanf("%d",&a);
    rem=a/10;
    mid=rem%10;
    rem=a/100;
    quotient=a%10;
    int rev=quotient*100+mid*10+rem;
    printf("\nThe Reversed number is: %d",rev);
    return 0;
}