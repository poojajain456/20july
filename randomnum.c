//prg to print random number between given range
#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the value of a and b");
	scanf("%d %d",&a,&b);
	while(a<=b)
	{
		printf("%d \n",a);
		a++;
	}
}
