#include <stdio.h>
#include<stdlib.h>
#include<string.h>

struct student
{
	int id;
  	int index[30];
  	int count,l;
  	char *name,*firstname;
};

void separatingFirstName(char *name,char *firstname)
{
	int l=0,i;
  	for(i=0;name[i]!='\0';i++)
  	{
	   	if(name[i]==' ')
	   	{
	     		break;
	   	}
	   	else if(name[i]=='.')
	   	{
	     		l=0;
	     		continue;
	   	}
	   	firstname[l]=name[i];
	   	l++;
  	}
  	firstname[l]='\0';
}

void findingduplicate(struct student *s,int n)
{
  	int i,j,l=0;
  	for(i=0;i<n;i++)
  	{
	  	if(s[i].firstname==NULL)
	  	{
	    		continue;
	  	}
	  	l=0;
	  	s[i].count=1;
	  	s[i].index[l]=i+1;
	  	l++;
	  	for(j=i+1;j<n;j++)
		{
	    		if(strcmp(s[i].firstname,s[j].firstname)==0)
	    		{
  	    			s[i].index[l]=j+1;
		    		l++;
		    		s[i].count++;
		    		s[j].firstname=NULL;
		 	}
  		}
	  	s[i].l=l;
  	}
}


int main(void)
{
  	int numStud,i,j;
  	struct student *stud;
  	printf("Enter the number of student\n");
  	scanf("%d",&numStud);
  	stud=(struct student*)malloc(numStud*sizeof(struct student));

  	for(i=0;i<numStud;i++)
  	{
		stud[i].name=(char*)malloc(30*sizeof(char));
	  	scanf("%d %[^\n]",&stud[i].id,stud[i].name);
  	}

  	for(i=0;i<numStud;i++)
	{
	  	stud[i].firstname=(char*)malloc(30*sizeof(char));
	  	separatingFirstName(stud[i].name,stud[i].firstname);
  	}

  	findingduplicate(stud,numStud);

  	for(i=0;i<numStud;i++)
  	{
    		if(stud[i].firstname !=NULL)
	  	{
	    		printf("%s,%d,[",stud[i].firstname,stud[i].count);
		  	for(j=0;j<stud[i].l;j++)
		  	{
			   	printf("%d",stud[i].index[j]);
			   	if(stud[i].count!=1)
			   	{
				    	stud[i].count--;
			    		printf(",");
			   	}
			}
		  	printf("]\n");
		}
  	}
  	return 0;
}
