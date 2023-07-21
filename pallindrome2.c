//pallindrome number
#include<stdio.h>
int main()
{
	int a=542,rem,sum=0;
	int temp;
	temp=a;
	while(a>0)
	{
		rem=a%10;
		sum=sum*10+rem;
		a=a/10;
	}
	if(temp==sum)
	{
		printf("pallindrome number");
	}
	else
	{
		printf("not pallindrome");
	}
	return 0;
}
