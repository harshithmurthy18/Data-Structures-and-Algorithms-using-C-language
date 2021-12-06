#include<stdio.h>
#include<stdlib.h>

void nodeCreation();
void printNodeData();

void insertNode();
void insertNode_beginning();
void insertNode_end();
void insertNode_position();

void deleteNode();
void deleteNode_beginning();
void deleteNode_end();
void deleteNode_position();

struct node *head = NULL, *newnode = NULL, *temp = NULL;
int choice = 1, node_count = 0;

struct node
{
	int data;
	struct node *next;
};

int main()
{
	int choice_menu = 0;

	while(1)
	{
		printf("***********************************************************\n");

		printf("Enter what you what you want to do in linked list..\n\n");
		printf("1: New node creation\n2: Print the node data\n3: Insert node\n4. Delete node\n");
		scanf("%d", &choice_menu);

		switch(choice_menu)
		{
			case 1:
			{
				nodeCreation();
				break;
			}

			case 2:
			{
				printNodeData();
				break;
			}

			case 3:
			{
				insertNode();
				break;
			}

			case 4:
			{
				deleteNode();
				break;
			}

		}
	}
	return 0;
}

void nodeCreation()
{
	while(choice)
	{
		newnode = (struct node*)malloc(sizeof(struct node));
		node_count++;
		//as soon as the node is created we will initialize it.
		printf("Enter the data: ");
		scanf("%d", &newnode->data);
		newnode->next = 0;

		if (head == 0)
			head = temp = newnode;

		else 
		{
			temp->next = newnode;
			temp = newnode;
		}

		printf("\nDo you wish to add more elements?? 1/0\n\n");
		scanf("%d", &choice);
	}	
}

void printNodeData()
{
		//accessing the elements
		printf("The number of nodes are: %d\n", node_count);

		temp = head;
		while(temp != 0)
		{
			printf("%d\n",temp->data);
			temp = temp->next;
		}
}

void insertNode()
{
	int insert_choice = 0;
	printf("Enter where do you want to insert the new elements: \n");
	printf("1: Beginning\n2: End\n3: At a position\n");
	scanf("%d", &insert_choice);

	switch(insert_choice)
	{
		case 1: //Beginning
		{
			insertNode_beginning();
			break;
		}

		case 2: //End 
		{
			insertNode_end();
			break;
		}
		case 3: //At a position
		{
			insertNode_position();
			break;
		}
	}
}

void insertNode_beginning()
{
	newnode = (struct node*)malloc(sizeof(struct node));
	node_count++;
	printf("Enter the value to be inserted:\n");
	scanf("%d", &newnode->data);
	newnode->next = head;
	head = newnode;
}

void insertNode_end()
{
	temp = head;

	if (head == NULL)
	{
		printf("No elements are present\n");
	}

	else 
	{
		newnode = (struct node*)malloc(sizeof(struct node));
		//traverseing through the link
		while(temp->next != NULL)
		{
			temp = temp->next;
		}
		printf("Enter the data to be inserted\n");
		scanf("%d", &newnode->data);

		temp->next = newnode;	
		newnode->next = NULL;
	}
}

void insertNode_position()
{
	if (head == NULL && node_count == 0)
		printf("Invalid position\n");

	else
	{
		int i = 1 , position = 0;

		printf("Enter the position where you wish to enter the data\n");
		scanf("%d", &position);

		if (position > node_count)
			printf("Invalid position entered\n");
		else
		{
			temp = head;
			newnode = (struct node*)malloc(sizeof(struct node));
			node_count++;

			while(i < position)//will reach the position afer which the data can be inserted
			{
				temp = temp->next;
				i++;
			}
			printf("Enter the data\n");
			scanf("%d", &newnode->data);

			newnode->next = temp->next; //right most link being connected with the new node first
			temp->next = newnode;
		} 
	}
}

//deleting the nodes
void deleteNode()
{
	int delete_choice = 0;

	printf("Where do you want to delete the node?\n");
	printf("1. Beginning\n2: End\n3: At a position\n");
	scanf("%d", &delete_choice);

	switch(delete_choice)
	{
		case 1: //beginning 
		{
			deleteNode_beginning();
			break;
		}

		case 2: 
		{
			deleteNode_end();
			break;
		}

		case 3:
		{
			deleteNode_position();
			break;
		}
	}
}


void deleteNode_beginning()
{
	temp = head;
	head = head->next;
	free(temp);
	node_count--;
	printf("Node deleted at the beginning\n\n");
}

void deleteNode_end()
{
	struct node *previous_node = NULL;
	temp = head;

	while (temp->next != NULL)
	{
		previous_node = temp;
		temp = temp->next;
	}

	previous_node->next = NULL;
	free(temp);
	node_count--;
	printf("Node deleted at the end\n\n");
}

void deleteNode_position()
{
	int position = 0, i = 1;
	struct node *next_node = NULL;

	printf("Enter the position at which you want to delete the list\n");
	scanf("%d", &position);

	temp = head;
	while(i<(position-1)) //stop before the deleting position
	{
		temp = temp->next;
		i++;
	}
	next_node = temp->next;
	temp->next = next_node->next;
	free(next_node);
	node_count--;
	printf("Node deleted at: %d\n", position);
}