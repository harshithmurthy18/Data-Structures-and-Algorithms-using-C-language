int main()
{
	temp = head;
	head = temp->next;
	free(temp);
}
