#include<stdio.h>
int main()
{
	int num,i,flag=0,sum=0;
	scanf("%d",&num);
	if(num<=1)
	{
		printf("the num is not a prime");
	}
		for(i=2;i*i<=num;i++)
		{
			if(num%i==0)
			{
				flag=1;
				break;
			}
		}	
	if(flag==1)
		printf("the num is not a prime");
	else
		printf("the num is prime");
		
	for(i=0;num!=0;i++)
	{
		int rem=num%10;
		sum=sum+rem;
		num/=10;
	}
	printf("\nthe sum of the digit is %d",sum);
}
