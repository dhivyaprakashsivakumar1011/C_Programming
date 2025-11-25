#include<stdio.h>
int main()
{
    int a,rem,quotient;
    printf("Enter a number:");
    scanf("%d",&a);
    rem=a/10;
    quotient=a%10;
    int rev=quotient*10+rem;
    printf("\nThe Reversed number is: %d",rev);
    return 0;
}