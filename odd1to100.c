//prg to print odd number between 1 to 100
#include<stdio.h>
void main()
{
	int i=1;
	while(i<=100)
	{
		if(i%2!=0)
		{
			printf("%d",i);
			printf("\n");
		}
		i++;
	}
	
}
