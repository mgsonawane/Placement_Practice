#include<stdio.h>
#include<stdlib.h>

struct node
{
int data;
struct node *next;
};
struct node *peek(struct node *head)
{
if (head==NULL)
{
	printf("Queue is empty\n");
	return 0;
}
else {
int a=head->data;
printf("Current node is %d \n",a);
return head; }
}
struct node *delete(struct node *head)
{
if (head==NULL)
{
	printf("Queue is empty\n");
	return 0;
}
else 
{
 	int i,a=head->data;
	 head=head->next;

	printf("%d  Node deleted\n",a);
	return head;
}
}


int main()
{
        int k,ch;
struct node *newnode,*temp,*head=NULL,*tr;
while(1)
{
	printf("1)enQueue\n");
	printf("2)dequeue\n");
	printf("3)peek\n");
	printf("4)Exit\n\n");
	printf("Enter Your Choice :: \n");
	scanf("%d",&ch);

 switch(ch)
 {

	case 1: {       int data;
			printf("Enter number\n");
			scanf("%d",&data);
		 	newnode=(struct node*)malloc(sizeof(struct node));
		         newnode->data=data;
		         newnode->next=NULL;
			 if(head==NULL)
			{
			        head=newnode;
			        temp=head;
			}
			else
			        temp->next=newnode;
			        temp=newnode;
		}
		break;
	case 2: delete(head);
		break;
	
	case 3:peek(head);
		break;
	case 4:
		exit(0);

}
}

return 0;
}

