//check number is armstrong or not
#include<stdio.h>
int main()
{
	int num,sum=0,rem;
	printf("enter the number");
	scanf("%d",&num);
	int temp;
	temp=num;
	while(num>0)
	{
		rem=num%10;
		sum=sum+rem*rem*rem;
		num=num/10;
	}
	if(temp==sum)
	{
		printf("number is armstrong");
	}
	else
	{
		printf("not armstrong");
	}
	return 0;
	
}
