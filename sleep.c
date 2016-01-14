#include<stdio.h>
#include<unistd.h>
int main()
  {
	  int i;
	  char a[]="happypongal";
	  for(i=0;i<11;i++)
	    {
	      printf("%c",a[i]);
  	    if(i==4)
  	    {
  		    printf(" ");
	 	    }
  	    sleep(1);
	    }
	  return 0;
 }  

