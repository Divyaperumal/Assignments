 //finding the next palindrome of the given number
 
 #include<stdio.h>
 
 int palindrome(int i)
 {
     int rev=0; 
     reverse(i,&rev);
     if(rev == i)
     {
         return 1;
     }
     else
     {
         return 0;
     }
 }
 
 void reverse(int n,int *rev)
 {
     int r=0;
     while(n!=0)
     {
         r=n%10;
         n=n/10;
         *rev=(*rev)*10+r;
     }
 }
 
 int main()
 {
     int n,i,flag;
     scanf("%d",&n);
     
     for(i=n+1;;i++)
     {
         flag=palindrome(i);
         if(flag == 1)
         {
             printf("%d",i);
             break;
         }
     }
     return 0;
 }
