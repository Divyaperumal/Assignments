//given a number.separating each ndigits and storing it in an array.finding the sum and difference of mi8nimum and maximun numbers in array.
#include <stdio.h>

int main(void)
{
    int num,*arr,k=0,sum=0,difference,i,min=0,max=0;
    arr=(int *)malloc(20*sizeof(int));
    scanf("%d",&num);
    
    while(num!=0)
    {
        arr[k]=num%10;
        num=num/10;
        k++;
    }
    
    min=max=arr[0];
    
    for(i=0;i<k;i++)
    {
        if(min>arr[i])
        {
            min=arr[i];
        }
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    
    sum=max+min;
    
    difference=max-min;
    
    printf("sum : %d\ndifference : %d",sum,difference);
    
	return 0;
}
