#include<stdio.h>
#include<stdlib.h>
struct q
{
int data;
struct q *next;
};
struct q *front=NULL,*rear=NULL,*temp=NULL,*temp1=NULL,*current=NULL,*nextt=NULL,*prev=NULL;

void print()
{
temp1=front;
while(temp1!=NULL)
{
printf(" %d ",temp1->data);
temp1=temp1->next;
}
printf("\n");
}
struct node *rev(int k)
{
current=front;
temp1=current;
int cnt=0;
while(cnt < k)
{nextt=current->next;
current->next=prev;
prev=current;
current=nextt;
cnt++;
}
front=prev;
if (front != rear)
{
temp1->next=nextt;
}
else 
{
rear=temp1;
}
print();
}
struct q *frontt()
{
if (front!=NULL)
	printf("Front %d\n",front->data);
else
	printf("!!!!!Empty queue!!!!!\n");

}
struct q *sizee()
{
int cnt=0;
temp=front;
while(temp != NULL)
{
cnt++;
temp=temp->next;
}
printf("%d\n",cnt);
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
printf("%d\n%d\n",front->data,rear->data);
}
int main()
{
int ch,x,k;
while(1)
{
	printf("1)Enqueue\t");
	printf("2)dequeue\t");
	printf("3)size\t");
	printf("4)front\t");
	printf("5)reverse\t");
	printf("6)print_Queue\t");
	printf("7)Rear\t");
	printf("8)exit\t");
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
case 3: sizee();
	break;
case 4: frontt();
	break;
case 5: printf("How many elements u want to reverse\n");
	scanf("%d",&k);
	rev(k);
	break;
case 6:print();
	break;
case 7:printf("%d\n",rear->data);
	break;
case 8:exit(0);

}
}
}
