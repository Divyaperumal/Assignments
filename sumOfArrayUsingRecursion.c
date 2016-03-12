//
//  RecursionSum.c
//  
//
//  Created by R.M.D. Engineering College  on 12/03/16.
//
//

#include <stdio.h>

int sumOfArray(int arr[],int n,int sum)
{
    if(n==0)
    {
        return sum;
    }
    sum=sum+arr[n-1];
    return sumOfArray(arr,n-1,sum);
}

int main()
{
    int arr[]={10,20,30,40,50};
    int n=5,sum=0;
    sum=sumOfArray(arr,n,sum);
    printf("%d\n",sum);
    return 0;
    
}
