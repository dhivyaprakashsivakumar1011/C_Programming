#include<stdio.h>
int main()
{
	int i,sum=0;
	for(i=11;i<=99;i++)
	{
		if(i%2!=0)
		{
			if(i/10==7)
			{
				sum+=i;
			}
		}
	}
	printf("%d",sum);
	return 0;
}
