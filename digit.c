#include<stdio.h>
int main()
{
	int num;
	int i=0;
	printf("enter any number");
	scanf("%d",&num);
	while(num!=0)
	{
		num=num/10;
		i++;	
	}	
	printf("total digit in a number=%d",i);
	return 0;
}
