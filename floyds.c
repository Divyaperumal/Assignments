#include<stdio.h>
void main()
{	
	int i,j,k=1,row;
	scanf("%d",&row);
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d\t",k);
			k++;
		}
		printf("\n");
	}
	getch();
}
