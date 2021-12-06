int main()
{
	newnode = (struct node*)malloc(sizeof(struct node));
	printf("Enter the data\n");
	scanf("%d", &newnode->data);
	newnode->next = head;
	head = newnode; 
}

