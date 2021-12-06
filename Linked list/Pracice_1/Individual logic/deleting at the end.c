int main()
{
	struct node *previous_node = NULL;
	temp = head;

	while(temp->next != NULL)
	{
		previous_node = temp;
		temp = temp->next;
	}

	previous_node->next = NULL;
	free(temp);
}
