//prg to find out prime number
#include<stdio.h>
int main()
{
	int n,i;
	printf("enter the number");
	scanf("%d",&n);
	i=2;
	while(i<n)
	{
		if(n%i==0)
		{
			temp=1;
			break;
		}
		i++;
	}
	if (temp==0)
	{
		printf("prime number");
	}
	else
	{
		printf("not a prime number");
	}
	return 0;
}
