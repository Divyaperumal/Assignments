#include <stdio.h>
#include<stdlib.h>
 
struct node1
{
  int key1;
  struct node1* next1;
  struct node1 *previous1;
}*head1=NULL;

struct node2
{
  int key2;
  struct node2* next2;
  struct node2 *previous2;
}*head2=NULL;

struct node3
{
  int key3;
  struct node3* next3;
  struct node3 *previous3;
}*head3=NULL;

void insert1(int value)
{
  struct node1* temp=(struct node1*)malloc(sizeof(struct node1));
  temp->key1=value;
  temp->previous1=NULL;
  temp->next1=NULL;
  if(head1==NULL)
  {
    head1=temp;
    return ;
  }
  temp->next1=head1;
  head1->previous1=temp;
  head1=temp;
}

void insert2(int value)
{
  struct node2* temp=(struct node2*)malloc(sizeof(struct node2));
  temp->key2=value;
  temp->previous2=NULL;
  temp->next2=NULL;
  if(head2==NULL)
  {
    head2=temp;
    return ;
  }
  temp->next2=head2;
  head2->previous2=temp;
  head2=temp;
}

void insert3(int value)
{
  struct node3 *temp=(struct node3*)malloc(sizeof(struct node3));
  temp->key3=value;
  temp->previous3=NULL;
  temp->next3=NULL;
  if(head3==NULL)
  {
    head3=temp;
    return ;
  }
  temp->next3=head3;
  head3->previous3=temp;
  head3=temp;
}

void print()
{
  struct node3 *p=head3;
  while (p!=NULL)
  {
  	printf("%d",p->key3);
	p=p->next3;
  }
}

void add()
{
  int a,carry=0;
  struct node1 *p=head1;
  struct node2 *q=head2;
  while(p->next1!=NULL)
  {
	  p=p->next1;
  }
  while(q->next2!=NULL)
  {
	  q=q->next2;
  }
  while(p!=NULL && q!=NULL )
  {
	  a=p->key1 + q->key2 + carry;
	  carry=0;
	  p=p->previous1;
	  q=q->previous2;
	  if(a>9)
	  {
	    carry=a/10;
	    a=a%10;
	  }
	  insert3(a);
  }
  if(p!=NULL)
  {
	  while(p!=NULL)
	  {
		  a=p->key1+carry;
		  p=p->previous1;
		  carry=0;
		  insert3(a);
	  }
  }
  else if(q!=NULL)
  {
	  while(q!=NULL)
	  {
		  a=q->key2+carry;
		  q=q->previous2;
		  carry=0;
		  insert3(a);
  	}
  }
  else
  {
	  insert3(carry);
  }
}

int main()
{
  int num1,num2,r;
  scanf("%d %d",&num1,&num2);
  while(num1!=0)
  {
	  r=num1%10;
  	num1=num1/10;
	  insert1(r);
  }
  while(num2!=0)
  {
	  r=num2%10;
	  num2=num2/10;
	  insert2(r);
  }
  add();
  print();
  return 0;
}
