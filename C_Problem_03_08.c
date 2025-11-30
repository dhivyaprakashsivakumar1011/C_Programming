#include<stdio.h>
int main()
{
    int a,b;

    scanf("%d",&a);

    b=a%10;
    int c=a/10;

    if(c!=b)
    {
        printf("Success"); 
        
    }
    else
    {
         printf("Failure");
    }

    return 0;
}
