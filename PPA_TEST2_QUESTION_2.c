#include<stdio.h>
#include<stdlib.h>
struct q
{
int data;
struct q *next;
};
struct q *front=NULL,*rear=NULL,*temp=NULL;
struct q *peek()
{
if (front!=NULL)
	printf("Front %d\n",front->data);
else
	printf("!!!!!Empty queue!!!!!\n");

}

struct q dequ()
{
if (front==NULL)
	printf("Queue is empty\n");
else
{
temp=front;
front=front->next;
free(temp);}
}

struct q *enqueue(int x)
{
temp=(struct q *)malloc(sizeof(struct q));
temp->data=x;
temp->next=NULL;
if (front==NULL)
{	front=temp;
	rear=front;}
else
{
	rear->next=temp;
	rear=rear->next;
}
}
int main()
{
int ch,x;
while(1)
{
	printf("1)Enqueue\t");
	printf("2)dequeue\t");
	printf("3)peek\t");
	printf("4)exit\t");
	printf("\nEnter Your Choice :: \n");
	scanf("%d",&ch);
switch(ch)
{
case 1: printf("Enter Element");
	scanf("%d",&x);
	enqueue(x);
	break;
case 2:
	dequ();
	break;
case 3: peek();
	break;
case 4:exit(0);

}
}
}
