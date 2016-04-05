//
//  hexaDecimal.c
//  
//
//  Created by R.M.D. Engineering College  on 19/03/16.
//
//voting system

#include <stdio.h>
#include<string.h>

int main()
{
    char partyName[30][30],arr[10],choice='Y';
    int noOfVote[30]={0},i,noOfContestants,vote,max,win; //assigning 0 to an array
    
    printf("enter the number of contestants\n");
    scanf("%d",&noOfContestants);
 
    printf("enter the party names\n");
    for(i=0;i<noOfContestants;i++)
    {
        scanf("%s",arr);
        strcpy(partyName[i],arr);                       //assining a string to the 2D char array (string) from the user
    }
    
    do
    {
        printf("contestants:\n");
        for(i=0;i<noOfContestants;i++)
        {
            printf("%d :%s\n",i+1,partyName[i]);
        }
        printf("enter your vote\n");
        scanf("%d",&vote);
        
        if(vote>noOfContestants)
        {
            printf("invalid contestant\n");
        }
        else
        {
            for(i=0;i<noOfContestants;i++)
            {
                if(i==vote-1)
                {
                    noOfVote[i]++;
                }
            }
        }
        
        printf("do you want to vote\nY-Yes\tN-No\n");
        getchar();
        scanf("%c",&choice);
        
    }while(choice=='Y');

    max=noOfVote[0];
    for(i=0;i<noOfContestants;i++)
    {
        if(max<noOfVote[i])
        {
            max=noOfVote[i];
            win=i;
        }
        
    }
    printf("elected party is %s",partyName[win]);
    
    return 0;
}
