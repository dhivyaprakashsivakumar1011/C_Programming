#include<stdio.h>
int main()
{
	int i,num,sum=0;
	scanf("%d",&num);
	for(i=0;num!=0;i++)
	{
		int digit=num%10;
		sum+=digit;
		num/=10;
	}
	printf("%d",sum);
	return 0;
}
