#include "list.h"

void	print_linked_list(t_list *head)
{
	while (head)
	{
		printf("%i ", head->data);
		head = head->next;
	}
}

void	free_linked_list(t_list *head)
{
	t_list	*current;
	t_list	*tmp;

	current = head;
	while (current)
	{
		tmp = current;
		current = current->next;
		free(tmp);
	}
}

int	ascending(int a, int b)
{
	return (a <= b);
}

int	main(void)
{
	t_list	*head = malloc(sizeof(t_list) * 1);	
	t_list	*a = malloc(sizeof(t_list) * 1);	
	t_list	*b = malloc(sizeof(t_list) * 1);	
	t_list	*c = malloc(sizeof(t_list) * 1);	
	t_list	*d = malloc(sizeof(t_list) * 1);	
	
	head->data = 10;
	a->data = 2;
	b->data = 300;
	c->data = 4;
	d->data = 5;

	head->next = a;
	a->next = b;
	b->next = c;
	c->next = d;
	d->next = NULL;

	printf("before	-->	");
	print_linked_list(head);
	sort_list(head, ascending);
	printf("\nafter	-->	");
	print_linked_list(head);
	printf("\n");
	free_linked_list(head);
	
	return (0);
}
