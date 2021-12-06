//inserting at a position

int main()
{
	printf("Where at?\n");
	scanf("%d", &position);

	int i = 1; 
	temp = head;

	while(i < position)
	{
		temp = temp->next;
		i++;
	}

	printf("Data:");
	scanf("%d", &newnode->data);
	
	newnode->next = temp->next;
	temp->next = newnode;

}