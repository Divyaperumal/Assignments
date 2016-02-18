//converting the given number into word representation(0-999)

#include<stdio.h>
int main()
{
	char *words[]={ "zero","one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
	char *wordsTens[]={"twenty","thirty","fourty","fifty","sixty","seventy","eighty","ninety"};
	int num,tens,ones;
	char *ten,*hundred,*one;
	ten=(char *)malloc(10*sizeof(char));
	hundred=(char *)malloc(10*sizeof(char));
	one=(char *)malloc(10*sizeof(char));
	scanf("%d",&num);
	if(num == 0)
	{
		printf("%s",words[0]);
		getch();
		return 0;
	}
	ones=num%10;
	num=num/10;
	tens=num%10;
	num=num/10;
	one=words[ones];
	if(tens == 1)
	{
		ten=words[tens*10+ones];
	}
	else
	{
		ten=wordsTens[tens-2];
	}
	if(num!=0)
	{
		hundred=words[num];
		 if(tens == 0 && ones == 0)
		 {
			printf("%s hundred",hundred);
		 }
		 else if(ones == 0)
		      {
				    printf("%s hundred and %s",hundred,ten);
		      }
		      else if(tens!=0)
			         {
				          printf("%s hundred and %s %s",hundred,ten,one);
			         }
			          else
			          {
				          printf("%s hundred and %s",hundred,one);
			          }
	}
	else
	{      if(tens==1 ||ones==0)
		{
			printf("%s",ten);
		}
		else if(tens==0)
		       {
				      printf("%s",one);
		       }
		       else
			     {
				      printf("%s %s",ten,one);
			      }
	}
	return 0;
}

