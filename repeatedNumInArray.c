//counting repeated numbers in an array
#include <stdio.h>

int main(void) {
	int arr[]={10,20,30,20,40,50,30},i,j,count=0;
	
	for(i=0;i<6;i++)
	{
	    for(j=i+1;j<7;j++)
	    {
	        if(arr[i]==arr[j])
	        {
	            count++;
	            break;
	        }
	    }
	}
	printf("count : %d",count);
	return 0;
}

