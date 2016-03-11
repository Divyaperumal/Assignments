//finding the sum of even digits in a given number
#include <stdio.h>

int main(void) 
{
    int num,sum=0,r;
    scanf("%d",&num);
    
    while(num!=0)
    {
        r=num%10;
        if(r%2 ==0)
        {
            sum=sum+r;
        }
        num=num/10;
    }
    
    printf("sum of even digits is %d",sum);
	return 0;
}

