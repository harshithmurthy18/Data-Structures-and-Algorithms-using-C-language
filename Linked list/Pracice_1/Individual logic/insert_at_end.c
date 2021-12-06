//inserting at the end

int main()
{
	newnode = (struct node*)malloc(sizeof(struct node));
	printf("Enter the data\n");
	scanf("%d", &newnode->data);

	temp = head;
	while(temp->next != 0)
	{
		temp = temp->next;
	}

	temp->next = newnode;
	newnode->next = NULL;

}

