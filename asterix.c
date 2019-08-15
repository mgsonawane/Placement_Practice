#include<stdio.h>
#include<stdlib.h>

struct q
{
int data;
struct q *next;
};

struct q  *front=NULL,*rear=NULL,*temp=NULL;

void *deq()
{
if (front==NULL)
{
	printf("Queue is empty"); 
	return ;
}
temp=front;
front=front->next;
rear->next=front;
free(temp);
}
void *enq()
{
int x;
printf("Enter number to insert\t");
scanf("%d",&x);
		temp=(struct q *)malloc(sizeof(struct q));
		temp->data=x;
		temp->next=temp;
if (front==NULL)
	{
		front=temp;
		rear=front;
	}
else
{
	rear->next=temp;
	rear=temp;
	temp->next=front;
}
}
void rearr()
{
if (rear==NULL )
{
	printf("Queue is empty\n");
	return ;
}
printf("Front: %d\n",rear->data);
}

void *frontt()
{
if (front==NULL ){
	printf("Queue is empty\n");return 0;}
printf("Front: %d\n",front->data);
}

int main()
{
int ch;
	printf("1)Front\t");
	printf("2)Rear\t");
	printf("3)Enque\t");
	printf("4)Deque\t");
	printf("5))Exit\n");
while(1)
{
	printf("Enter Your Choice\t");
	scanf("%d",&ch);
switch(ch)
{
case 1: frontt();
	break;
case 2: rearr();
	break;
case 3: enq();
	break;
case 4: deq();
	break;
case 5:exit(0);
}
}

}
