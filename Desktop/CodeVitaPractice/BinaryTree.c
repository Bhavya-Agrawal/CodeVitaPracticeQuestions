#include<stdio.h>
#include<stdlib.h>

//struct globally declared so that every function can use it
struct Node
{
	struct Node *left;
	int info;
	struct Node *right;
};

void search(struct Node *node,int data)
{
	struct Node *temp=NULL;
	temp = (struct Node*)malloc(sizeof(struct Node));
	int item,found=0,exit=0,count=0;
	item = data;
	temp = node;

	//the condition when the tree consists of only the root node
	if(temp->left == NULL && temp->right == NULL)
	{
		if(item == temp->info)
		{
			printf("The tree is empty and the data is found at root node \n");
		}
		else
		{
			printf("The data is not found in the tree\n");
		}
	}

	//condition when the tree has at least left or both successor
	/*else if(temp->left!=NULL || temp->right!=NULL)
	{
		if(item==temp->info)
		{
			printf("The data is found at the root node\n");
		}
		else if(item<temp->info)
		{
			while(temp->left!=NULL&&item<=temp->info&&found!=0)
			{
				temp = temp->left;
				if(item==temp->info)
					{printf("the data is found in the left part of root\n");found=0;}
				else
					printf("data not found\n");
			}
				
		}
		else if(item>temp->info)
		{
			while(temp->right!=NULL&&item>=temp->info&&found!=0)
			{
				temp = temp->right;
				if(item==temp->info)
					{printf("the data is found in the right part of root\n");found=0;}
				else
					printf("data not found\n");
			}
		}

	}*/

	else if(temp->left!=NULL || temp->right!=NULL)
	{
		while(found!=1)
		{
			count++;
			if(item<temp->info)
			{
				if(temp->left==NULL)
					{found=1; 		exit=1;}
				temp=temp->left;
			}
			else if(item>temp->info)
			{
				if(temp->right==NULL)
				{
					found=1;		exit=1;
				}
				temp = temp->right;
			}
			else if(item == temp->info)
				{printf("Data %d is found in tree after count==>%d\n",item,count);
					found = 1;
				}
		}
	}

	if(found==1 && exit==1)
		printf("The data is not present in the tree\n");

}

int main()
{
	int n;
	struct Node *root=NULL;
	struct Node *first=NULL;
	struct Node *second=NULL;
	struct Node *third=NULL;
	struct Node *forth=NULL;
	struct Node *fifth=NULL;
	root=(struct Node*)malloc(sizeof(struct Node));
	first=(struct Node*)malloc(sizeof(struct Node));
	second=(struct Node*)malloc(sizeof(struct Node));
	third=(struct Node*)malloc(sizeof(struct Node));
	forth=(struct Node*)malloc(sizeof(struct Node));
	fifth=(struct Node*)malloc(sizeof(struct Node));


	//creation of a binary tree headed at the root node
	root->left = first;		root->info = 9;			root->right = second;

	first->left = third;	first->info = 7;		first->right = forth;

	second->left = NULL;	second->info = 10;		second->right = fifth;

	third->left = NULL;		third->info = 6;		third->right = NULL;

	forth->left = NULL;		forth->info = 8;		forth->right = NULL;

	fifth->left = NULL;		fifth->info = 19;		fifth->right = NULL;


	printf("Enter the item you want to search\n");
	scanf("%d",&n);
	//searching an element in the tree
	search(root,n);
	return 0;
}