#include<stdio.h>
#include<stdlib.h>

struct Node{

int x;
int y;
struct Node *next;
};

//creating a function for calculating the slope and returning the no of different slopes
int slope(struct Node *n)
{

	int m1=0,m2=0,y1,x1,x2,y2,count = 0;
	struct Node *temp=NULL;
	temp = n->next;
	//calculating the slope of each node
	while(temp->next!=NULL)
	{
		//slope between first 2 nodes
		x1=(temp->x)-(n->x);
		y1 = (temp->y)-(n->y);
		m1 = y1/x1;

		//slope between next 2 nodes
		x2 = (temp->next->x)-(temp->x);
		y2 = (temp->next->y)-(temp->y);
		m2 = y2/x2;

		printf("%d\t%d\t%d\t\n",x1,y1,m1);
		printf("%d\t%d\t%d\t\n",x2,y2,m2);
		printf("value of m1 is %d\n",m1);
		printf("value of m2 is %d\n",m2);
		if(m1!=m2)
			count++;

		n = temp;
		temp = n->next;
	}


	return count;
}
int main()
{
	int total_diff=0;
	struct Node *head=NULL;
	struct Node *second=NULL;
	struct Node *third=NULL;
	struct Node *forth=NULL;
	struct Node *fifth=NULL;
	struct Node *sixth=NULL;	

	head = (struct Node*)malloc(sizeof(struct Node));
	second = (struct Node*)malloc(sizeof(struct Node));
	third = (struct Node*)malloc(sizeof(struct Node));
	forth = (struct Node*)malloc(sizeof(struct Node));
	fifth = (struct Node*)malloc(sizeof(struct Node));
	sixth = (struct Node*)malloc(sizeof(struct Node));


	head->x = 1; 	head->y=2;		head->next= second;
	second->x=3; 	second->y=4;	second->next = third;
	third->x = 5;	third->y = 6;	third->next = forth;
	forth->x = 1;	forth->y = 10;	forth->next =fifth;
	fifth->x = 2;	fifth->y = 12;	fifth->next =sixth;	
	sixth->x = 1;	sixth->y = 10;	sixth->next =NULL;

	total_diff = slope(head);
	printf("Total no of places at which the slope differs is %d\n",total_diff);
	return 0;

}