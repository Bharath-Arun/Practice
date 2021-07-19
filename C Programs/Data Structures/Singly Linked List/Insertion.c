#include<stdio.h>
struct node{
	int data;
	struct node *next;
};
struct node *head,*temp,*ptr;
void insertBegin();
void insertAfter();
void insertEnd();
void display();

void main()
{
	int choice=0;
	while(choice!=5)
	{
		printf("\nChoose one from the following list..");
		printf("\n1.Insert At Beginning\n2.Insert After the Location\n3.Insert At End\n4.Display\n5.Exit");
		printf("\nEnter your choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				insertBegin();
				break;
			case 2:
				insertAfter();
				break;
			case 3:
				insertEnd();
				break;
			case 4:
				display();
				break;
			case 5:
				exit(0);
				break;
			default:
				printf("Please enter valid choice..");
		}
	}
}

void insertBegin()
{
	struct node *newnode;
	int value;
	newnode=(struct node*)malloc(sizeof(struct node));
	if(newnode==NULL){
		printf("\nOVERFLOW");
	}
	else{
		printf("\nEnter the value:\n");
		scanf("%d",&value);
		newnode->data=value;
		newnode->next=head;
		head=newnode;
		printf("\nNode Inserted");
	}
}

void insertAfter()
{
	int i,loc,value;
	struct node *newnode, *temp;
	newnode=(struct node*)malloc(sizeof(struct node));
	if(newnode==NULL){
		printf("\nOVERFLOW");
	}
	else {
		printf("\nEnter the value:\n");
		scanf("%d",&value);
		newnode->data=value;
		printf("\nEnter the location after which u want to insert:\n");
		scanf("%d",&loc);
		temp=head;
		for(i=0;i<loc;i++)
		{
			temp=temp->next;
			if(temp==NULL)
			{
				printf("\nCannot be inserted");
				return;
			}
		}
		newnode->next=temp->next;
		temp->next=newnode;
		printf("\nNode Inserted");
	}
}

void insertEnd()
{
	struct node *newnode, *temp;
	int value;
	newnode=(struct node*)malloc(sizeof(struct node));
	if(newnode==NULL){
		printf("\nOVERFLOW");
	}
	else{
		printf("\nEnter the value:\n");
		scanf("%d",&value);
		newnode->data=value;
		if(head==NULL)
		{
			newnode->next=NULL;
			head=newnode;
			printf("\nNode inserted");
		}
		else 
		{
			temp=head;
			while(temp->next!=NULL)
			{
				temp=temp->next;
			}
			temp->next=newnode;
			newnode->next=NULL;
			printf("\nNode inserted");
		}
	}
}

void display()
{
	struct node *ptr;
	ptr=head;
	while(ptr->next!=NULL)
	{
		printf("\n%d",ptr->data);
		ptr=ptr->next;
	}
}
