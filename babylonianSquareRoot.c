
#include<stdio.h>

float squareRoot(int num,int n);

int main()
{
	int num,n;
	float sqroot;
    printf("enter the number");
    scanf("%d",&num);
    printf("enter the number of iterations");
	scanf("%d",&n);
	sqroot=squareRoot(num,n);
	printf("%f",sqroot);
    return 0;
}

float squareRoot(int num,int n)
{
    float avg=2;
    while(n!=0)
	{
		avg=(avg+(num/avg))/2;
		n--;
	}
	return avg;
}
