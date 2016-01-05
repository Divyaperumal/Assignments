#include<stdio.h>
void main()
{
  int a[20][20],i,j,row;
	scanf("%d",&row);

	for(i=0;i<row;i++)
	{
		for(j=0;j<=i;j++)
		{
			if(i==j)
			{
				a[i][j]=1;
				printf("%d\t",a[i][j]);
			}
			else if(j==0)
			{
				a[i][j]=1;
				printf("%d\t",a[i][j]);
			}
			else
			{
				a[i][j]=a[i-1][j-1]+a[i-1][j];
				printf("%d\t",a[i][j]);
			}
		}
		printf("\n");
	}
	getch();
}

