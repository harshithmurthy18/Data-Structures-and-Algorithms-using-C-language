//new node logic:

struct node
{
	int data;
	struct node *next;
};

int main()
{
	struct node *head = NULL, *newnode = NULL;

	//while(choice)
	newnode	= (struct node*)malloc(sizeof(struct node)); 

	printf("Enter the data");
	scanf("%d", &newnode->data);
	newnode->next = NULL;

	if(head == NULL)
		head = temp = newnode;
	else 
	{
		temp->next = newnode;
		temp = newnode;
	}
	//can loop till we want to quit using choice variable

}
