#include <stdio.h>
#include <stdlib.h> //for malloc() 


struct node
{
	int data;
	struct node *next;
};

int main()
{
	struct node *head = NULL, *newnode = NULL, *temp = NULL;
	int choice = 1;

	//node node creation
	while(choice == 1)
	{
		newnode = (struct node *) malloc(sizeof(struct node));
		printf("Enter the data:\n");
		scanf("%d", &newnode->data); //first node data is taken here
		newnode->next = NULL; //by default make it just a single node.

		if(head == NULL)
			head = temp = newnode;
		else
		{
			temp->next = newnode;
			temp = newnode;
		}

		printf("Data entered sucessfully\n");
		printf("\nDo you want to continue adding more nodes? 1/0\n");
		scanf("%d", &choice);
	}

	//printing the values of the arrays
	printf("Entered data are: \n");

	temp = head;
	while(temp != 0)
	{
		printf("%d\n", temp->data);
		temp = temp->next;
	}

	//getch();
	return 0;
}