#include<stdio.h>
#include<conio.h>

int main()
{
	int bin[100],dec,noBinDigits=0,i,;
	clrscr();
	scanf("%d",&dec);
	for(i=0;dec!=0;i++)
	{
		bin[i]=dec%2;
		dec=dec/2;
    noBinDigits++;
	}
	printf("\n%d",noBinDigits);
	getch();
	return 0;
}
