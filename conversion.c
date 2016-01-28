#include <stdio.h>
char* conversion (int,int,int*);
int main()
{
	int dec,base,j;
	int k;
	char *op=malloc(10*sizeof(char));
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
	j=k-1;
	for(;j>=0;j--)
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
	char *a;
	int i;
	a=malloc(10*sizeof(char));
	for(i=0;d!=0;i++)
	{   
		a[i]=d%b;
		d=d/b;
	}
    	*k=i;
	return a;
}
