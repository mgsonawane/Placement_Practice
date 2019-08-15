#include<stdio.h>
#include<stdlib.h>

struct q
{
int data;
struct q *next;
};
struct q  *front=NULL,*rear=NULL,*temp=NULL,*temp1=NULL;
int top=0,*stack;
void push(int a)
{
stack[top]=a;
top++;
}
void *enq()
{
int x;
printf("Enter number to insert\t");
scanf("%d",&x);
		temp=(struct q *)malloc(sizeof(struct q));
		temp->data=x;
		temp->next=NULL;
if (front==NULL)
	{
		front=temp;
		rear=front;
	}
else
{
	rear->next=temp;
	rear=temp;
}
}

int main()
{
int ch,n,i,flag=0,b=1;
printf("How many numbers u want to enter ??");
scanf("%d",&n);
for(i=0;i<n;i++)
{	enq();}
stack=(int*)malloc(sizeof(int)*n);
temp=front;
while(temp!=NULL)
{
if (temp->data > b)
{
push(temp->data);
if (top>1)
{
if (stack[top-2] < stack[top-1])
{	printf("NO");
	flag=1;}
}
}
else
	b++;
temp=temp->next;
}
if (flag==0)
	printf("YES");
return 0;
}
