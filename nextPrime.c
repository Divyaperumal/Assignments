#include <stdio.h>
  
int nextPrime(int inti);

int main() {
    int inital,prime;
    printf("Enter the inital prime number");
    scanf("%d",&inital);
    prime=nextPrime(inital);
    printf("Next prime: %d",prime);
	return 0;
}

int nextPrime(int inti)
{
    int i,j;
    for(i=inti+1;;i++)
    {
        for(j=2;j<i;j++)
        {
            if((i%j)==0)
            {   
                break;
            }
        }
        if(i==j)
        {
            break;
        }
    }
    return i;
}
