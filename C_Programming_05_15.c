#include<stdio.h>
int main()
{
	int i,num,sum=0,ldigit,first,mid;
	scanf("%d",&num);
	int numdum = num;
	int count;
	for(count=1;numdum!=0;count=count*10)
	{
		numdum/=10;
	}
	count/=10;
	ldigit = num%10;
	mid=num%count;
	mid/=10;
	first =num/count;
	sum=ldigit*count+mid*10+first;	
	printf("%d ",sum);
	return 0;
}
