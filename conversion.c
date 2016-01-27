#include <stdio.h>
char* conversion (int,int,int*);
int main()
{
	int dec,base,i,j,k;
	char *op;
	printf("Enter the number\n ");
	scanf("%d",&dec);
	printf("Enter the base\n");
	scanf("%d",&base);
	if(base>=2 && base<=36)
	{
		op=conversion(dec,base,&k);
	}
	else
	{
		printf("conversion is not possible");
	}
	for(j=k-1;j>=0;j--)
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
char* conversion(int d, int b,int *k )
{   
	int *a,i;
	for(i=0;d!=0;i++)
	{
		a[i]=d%b;
		d=d/b;
	}
	*k=i;
	return a;
}
