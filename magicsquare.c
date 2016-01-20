#include<stdio.h>
int main()
{
	int **arr,odr,k,i,j,m;
	scanf("%d",&odr);
	*arr=(int *)malloc(odr*sizeof(int*));
	for(i=0;i<odr;i++)
	{
  	arr[i]=(int *)malloc(odr*sizeof(int));
	}
	for(i=0;i<odr;i++)
	{
		for(j=0;j<odr;j++)
		{
			arr[i][j]=0;
		}
	}
	i=0;
	j=odr/2;
	m=odr*odr;
	for(k=1;k<=m;k++)
	{
		if(arr[i][j]==0)
		{
			arr[i][j]=k;
			j++;
			i--;
		}
		if(i<0)
		{
			i=odr-1;
		}
		if(j>odr-1)
		{
			j=0;
		}
		if(arr[i][j]!=0)
		{
			i=i+2;
			j--;
		}
		if(i>odr-1)
		{
			j=odr-1;
			i=1;
		}
	}
	for(i=0;i<odr;i++)
	{
		for(j=0;j<odr;j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}

