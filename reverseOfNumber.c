#include<stdio.h>
int main()
{
	int num,revNum=0,rem;
	scanf("%d",&num);
	while(num!=0)
	{
		rem=num%10;
		revNum=revNum*10 +rem;
		num=num/10;
	}
	printf("Reverse of number : %d",revNum);
	return 0;
}
