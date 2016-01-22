#include<stdio.h>
#include<stdlib.h>
#include<conio.h>


void main()
{

	int size,i,j,subset;
	int *arr;
	clrscr();
	printf("Enter the size: ");
	scanf("%d",&size);

	arr=(int*)malloc(size* sizeof(int));

	printf("\nEnter the numbers: ");
	for (i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	subset=1<<size;

	for(i=1;i<subset;i++)
	{
		for(j=0;j<size && j<i;j++)
		{
			if(i&(1<<j))
			{
				printf("%d ",arr[j]);
			}
		}
		printf("\n");
	}
	getch();
}

