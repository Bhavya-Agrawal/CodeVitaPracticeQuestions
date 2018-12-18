#include<stdio.h>
#include<stdlib.h>
//creating a node for the linkedlist
struct node
{
	int data;
	struct node *next;
};

// function to print the elements of the linkedlist
void printlist(struct node *n)
{
	while(n!=NULL)
	{
		printf("%d\n",n->data);
		n = n->next;
	}
}

void search(struct node *n)
{
	int found = 0;
	// to search and print for the last element in the list
	while(found==0)
	{
		if(n!=NULL && n->next == NULL)
	{
		found = 1;
		printf("%d\n",n->data);
	}

	// updating next node of list
	n = n->next;
	}
}

//updating each value of the node with data = data+1
void update(struct node *n)
{
	while(n!=NULL)
	{
		n->data = n->data+1;
		n = n->next;
	}
}

int main()
{
	struct node *head = NULL;
	struct node *second = NULL;
	struct node *third = NULL;

	// typecasting to the struct node with memory == node
	head = (struct node*)malloc(sizeof(struct node));
	second = (struct node*)malloc(sizeof(struct node));
	third = (struct node*)malloc(sizeof(struct node));

	// now pointing the nodes of linkedlist as
	head->data = 1;
	head->next = second;

	second->data = 2;
	second->next = third;

	third->data = 3;
	third->next = NULL;

	printlist(head);
	search(head);
	update(head);
	printlist(head);

	return 0;
}