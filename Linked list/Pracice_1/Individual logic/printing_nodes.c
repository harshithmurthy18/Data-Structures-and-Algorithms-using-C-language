//printing the node

int main()
{
	temp = head;

	while(temp != 0)
	{
		printf("%d\n", temp->data);
		temp = temp->next;
	}
}