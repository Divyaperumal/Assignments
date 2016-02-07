#include<stdio.h>

void unique(char str[],char subStr[],int m,int *k);

int main()
{
	char str[]="abcabc";
	char subStr[10];
	int l,i;
	clrscr();
	unique(str,subStr,6,&l);
	subStr[l]='\0';
	printf("length of substring:%d\n",l);
	printf("substring:%s\t",subStr);
	return 0;
}

void unique(char str[],char subStr[],int m,int *k)
{
	int i,j,flag=0;
	*k=0;
	subStr[*k]=str[0];
	(*k)++;
	for(i=1;i<m;i++)
	{
		flag=0;
		for(j=0;j<(*k);j++)
		{
			if(str[i]==subStr[j])
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			subStr[*k]=str[i];
			(*k)++;
		}
	}
}
