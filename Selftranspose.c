# Assignments
#include <stdio.h>
int main() 
{
	int a[10][10],i,j,n;
	printf("enter the order\n");
	scanf("%d",&n);
	for(i=-0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			int t=a[i][j];
			a[i][j]=a[j][i];
			a[j][i]=t;
		}
			
	}
	for(i=-0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
		
	}
	
	return 0;
}
