//i used difference 2 between numbers to build the triangle.
#include<stdio.h>
void main()
{	int a[20][20],i,j,row;
	scanf("%d",&row);
	a[0][0]=0;
	a[1][1]=1;
	printf("%d\n",a[1][1]);
	for(i=2;i<=row;i++)
	{
		a[i][1]=a[i-2][i-2]+2;
		printf("%d\t",a[i][1]);
		for(j=2;j<=i;j++)
		{
			a[i][j]=a[i][j-1]+2;
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
}
