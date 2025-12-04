#include<stdio.h>
int main()
{
    int a,out;
    printf("Enter the numeber: ");
    scanf("%d",&a);

    int temp = a/10;
    int temp1 = temp/10;

    int one=a%10;
    int ten=a/10;
    ten=ten%10;

    out=temp1*100+one*10+ten;

    printf("The output is : %d",out);
}