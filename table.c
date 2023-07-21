//print table 2 to 10 using user input
#include<stdio.h>
int main()
{
	int n,i=1;
	printf("enter any number");
	scanf("%d",&n);
	while(i<=10)
	{
		printf("%d \n",i*n);
		i++;
	}
	return 0;
}
