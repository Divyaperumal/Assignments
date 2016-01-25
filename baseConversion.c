#include <stdio.h>

int main()
{
	int dec,base,i,j;
	char op[100];
	clrscr();
	printf("Enter the number\n ");
	scanf("%d",&dec);
	printf("Enter the base\n");
	scanf("%d",&base);
	for(i=0;dec!=0;i++)
	{
		op[i]=dec%base;
		dec=dec/base;
	}
	for(j=i-1;j>=0;j--)
	{
		if(op[j]<10)
		{
			printf("%d",op[j]);
		}
		else
		{
			printf("%c",op[j]+55);        
		}
	}
	return 0;
}
