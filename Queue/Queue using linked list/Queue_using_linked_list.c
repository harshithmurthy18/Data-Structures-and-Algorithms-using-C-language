#include <stdio.h>
#include <stdlib.h>

void enqueue();
void display();
void dequeue();

struct node
{
	int data;
	struct node *next;
};

struct node *front = NULL, *rear = NULL, *temp = NULL;

int main()
{
	int menu_choice = 0;
	while(1)
	{
		printf("*****************************************************************************\n");
		printf("Enter the option: \n");
		printf("1: Enqueue\n2: Dequeue\n3: Display\n");
		printf("Your selection: ");
		scanf("%d", &menu_choice);

		switch(menu_choice)
		{
			case 1:
			{
				enqueue();
				break;
			}

			case 2: 
			{
				dequeue();
				break;
			}

			case 3:
			{
				display();
				break;
			}
		}
	}


	return 0;
}

void enqueue()
{
	int choice = 1;

	while(choice)
	{
		struct node *newnode = NULL;

		newnode = (struct node*)malloc(sizeof(struct node));

		printf("Enter the element of the queue:\n");
		scanf("%d", &newnode->data);
		newnode->next = NULL;

		//enqueue - new we just need to link to the elements or create one if its not available
		if(front == 0 && rear == 0)
			front = rear = newnode;

		else 
		{
			rear->next = newnode;
			rear = newnode;
		}
		printf("Do you want to continue? 1/0\n");
		scanf("%d", &choice);
	}
}

void display()
{
	temp = front;

	while(temp != NULL)  
	{
		printf("%d\t",temp->data);
		temp = temp->next;
	}
}

void dequeue()
{
	if (front == NULL && rear == NULL)
		printf("There are no elements in the queue\n");
	
	else
	{
		temp = front;
		front = front->next;
		free(temp);
	}
}