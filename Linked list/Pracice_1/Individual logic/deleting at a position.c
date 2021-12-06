//deletinig at a position

int main()
{
	int position = 0;
	struct node *nextnode = NULL;

	printf("Position to delete?\n");
	scanf("%d", &position);

	temp = head;
	int i = 1;

	while(i < (position-1))
	{
		temp = temp->next;
		i++;
	}  

	nextnode = temp->next;
	temp->next = nextnode->next;
	free(nextnode);
}
