//prg to print even numbers between 50 tyo 1000
#include<stdio.h>
int main()
{
	int i=50;
	while(i<=1000)
	{
		if(i%2==0)
		{
			printf("%d \n",i);
		}
		i++;
	}
	return 0;
}
