#include <stdio.h>
#include<string.h>
#include<stdlib.h>

int main(void)
{
  char *str[]={"1", "3", "11", "100", "19", "2", "5"},*temp;
	int i=0,j=0,n=7;
	temp=(char*)malloc(8*sizeof(char));
  for(i=0;i<n-1;i++)
	{
	  for(j=i+1;j<n;j++)
	  {
		  if(strlen(str[i]) > strlen(str[j]) || strlen(str[i])==strlen(str[j]) &&  strcmp(str[i],str[j]) > 0)
		  {
		    temp =str[i];
		    str[i]=str[j];
		    str[j]=temp;
		  }
	  }
	}
	for(i=0;i<n;i++)
	{
	   printf("%s\n",str[i]);
  }
	return 0;
}
