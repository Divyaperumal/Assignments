#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int zrow,zcol,row,col,i,j;
void printArray(int arr[3][3]);
int initialiseArr(int a[3][3]);
int swap(int arr[3][3],int row,int col);
int solved(int a[3][3]);
int main()
{
	int arr[3][3]={2,5,8,1,3,6,8,7,9};
	char move;
	arr[3][3]=initialiseArr(arr);
	clrscr();
	do
	{
		system("cls");
		printArray(arr);
		printf("\nEnter the move: U->Up,D->Down,R->Right,L->Left\t");
		scanf("%c",&move);
		move=toupper(move);
		switch(move)
		{
			case'U':
				row=zrow-1;
				col=zcol;
				break;
			case'D':
				row=zrow+1;
				col=zcol;
				break;
			case'R':
				row=zrow;
				col=zcol+1;
				break;
			case'L':
				row=zrow;
				col=zcol-1;
				break;
			case'Q':
				printf("\nYou Quit");
				break;
			default:
				printf("\nEnter the correct move");
		}
		arr[3][3]=swap(arr,row,col);
	}while(move!='Q');
	solved(arr);
	getch();
	return 0;
}
int initialiseArr(int a[3][3])
{
	a[2][2]=0;
	zrow=zcol=2;
	return a[3][3];
}
void printArray(int arr[3][3])
{
	for(i=0;i<3;i++)
	{
		printf("\n-------\n");
		for(j=0;j<3;j++)
		{
			printf("|%d",arr[i][j]);
		}
		printf("|");
	}
}
int swap(int arr[3][3],int row,int col)
{
	int temp;
	temp=arr[row][col];
	arr[row][col]=arr[zrow][zcol];
	arr[zrow][zcol]=temp;
	zrow=row;
	zcol=col;
	return arr[3][3];
}
int solved(int arr[3][3])
{
	int k=1;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(arr[i][j]==k &&arr[3][3]==0)
			{
				k++;
			}
		}
	}
	if(k==9)
	{
		printf("Puzzle solved You Win..");
	}
	else
	{
		printf("Try once again...");
	}
	return;
}


