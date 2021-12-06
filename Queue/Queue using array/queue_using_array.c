#include <stdio.h>
#define SIZE 5
int queue[SIZE] = {0};
int front = -1, rear = -1; //initially empty

int enqueue(int);
void display();
void dequeue();

int main()
{
	int menu_choice = 0;

	while(1)
	{
		printf("***********************************************************\n");
		printf("Enter the option: \n");
		printf("1: Enqueue\n2: Dequeue\n3: Display\n");
		printf("Your selection: ");
		scanf("%d", &menu_choice);

		switch(menu_choice)
		{
			case 1:
			{
				int data = 0;
				printf("Enter the data to enqueue: \n");
				scanf("%d", &data);
				enqueue(data);
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

int enqueue(int data)
{
	if(front == -1 && rear == -1)
	{
		front = rear = 0;
		queue[rear] = data;
	}

	else if (rear == SIZE-1)
	{
		printf("Queue is full\n");
		return -1;
	}

	else
	{
		rear++;
		queue[rear] = data;
	}
}

void display()
{
	for (int i = front; i<(rear+1); i++)
		printf("%d\t", queue[i]);
	printf("\n");
}

void dequeue()
{
	if(front == -1 && rear == -1)
		printf("Queue is empty\n");

	else if (front == rear)
		front == rear == -1;

	else 
	{
		printf("Dequeued: %d from the  queue.\n", queue[front]);
		front++;
	}
}