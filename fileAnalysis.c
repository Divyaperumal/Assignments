#include <stdio.h>
#include <stdlib.h>


struct fileanalysis
{
    int noOfWords;
    int noOfLetters;
    int noOfSpecialChar;
    int commonLetter[100];
}obj;

void lettersNotUsed(int a[],int alpha[])
{
    int i;

    printf("\nletters not used");
    for(i=65;i<=90;i++)
    {
       if(a[i]==0)
        {
            printf("\t%c",alpha[i-65]);
        }
    }

}

void commonLettersInFile(int a[],int alpha[])
{
    int i,j;

    for(i=65;i<90;i++)
    {
        for(j=i+1;j<=90;j++)
        {
            if(a[j]>a[i])
            {
                int temp=alpha[i-65];
                alpha[i-65]=alpha[j-65];
                alpha[j-65]=temp;

                int t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }

    printf("\nTop Three common letters");
    printf("\t%c",alpha[0]);
    printf("\t%c",alpha[1]);
    printf("\t%c",alpha[2]);
}

void lettersInFile(struct fileanalysis fileObj,char arr[])
{
    int i,ascii;
    int alpha[]={65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90};

    fileObj.noOfLetters=0;
    fileObj.noOfWords=0;
    fileObj.noOfSpecialChar=0;

    for(i=0;i<100;i++)
    {
          fileObj.commonLetter[i]=0;
    }

    for(i=0;arr[i]!='\0';i++)
    {
        if((arr[i]>='a' && arr[i]<='z') || (arr[i]>='A' && arr[i]<='Z'))
        {
            fileObj.noOfLetters++;
            ascii=arr[i];
            if(arr[i]>='a' && arr[i]<='z')
            {
                fileObj.commonLetter[ascii-32]++;
            }
            else
            {
                fileObj.commonLetter[ascii]++;
            }
        }
        else if(arr[i]!=' ' &&  arr[i]!='\n')
        {
            if(!(arr[i]>='0' && arr[i]<='9'))
             {
                fileObj.noOfSpecialChar++;
             }
        }

        if(i==0 && arr[i]!=' ')
        {
            fileObj.noOfWords++;
        }
        else if(arr[i-1]==' ' &&  ((arr[i]>='a' && arr[i]<='z') || (arr[i]>='A' && arr[i]<='Z')) )
        {
            fileObj.noOfWords++;
        }
    }

    printf("\nNo of letters in file : %d",fileObj.noOfLetters);
    printf("\nNo of words in file : %d",fileObj.noOfWords);
    printf("\nNo Of Special character in file : %d",fileObj.noOfSpecialChar);
    lettersNotUsed(fileObj.commonLetter,alpha);
    commonLettersInFile(fileObj.commonLetter,alpha);

}

int main()
{
    FILE *fp;
    struct fileanalysis fileObj;
    char ch,file[1000];
    int k=0,j;

	fp=fopen("file","r");

	if(fp == NULL)
	{
		printf("file doesnt exit");
	}
	else
	{
		while(1)
		{
			ch=fgetc(fp);
			if(ch == EOF )
			{
				break;
			}
			file[k]=ch;
			k++;
        }
        file[k]='\0';
		fclose(fp);
	}

     printf("%s",file);

    lettersInFile(fileObj,file);

    return 0;
}
