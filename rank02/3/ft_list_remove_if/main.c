#include <stdlib.h>
#include <stdio.h>
#include "ft_list.h"

int	remove_node(void *data, void *ref)
{
	if (data == ref)
		return 0;
	return (1);
}

int	ft_list_size(t_list *head)
{
	int	i;

	i = 0;
	while (head)
	{
		head = head->next;
		i++;
	}
	return (i);
}

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)());

int	main(void)
{
	t_list	*head = malloc (sizeof(t_list));
	t_list	*a = malloc (sizeof(t_list));
	t_list	*b = malloc (sizeof(t_list));
	t_list	*c = malloc (sizeof(t_list));
	t_list	*d = malloc (sizeof(t_list));
	
	head->next = a;
	a->next = b;
	b->next = c;
	c->next = d;
	d->next = NULL;

	char straa[] = "String aa";
	a->data = &straa;
	char strbb[] = "String bb";
	b->data = &strbb;
	char strcc[] = "String cc";
	c->data = &strcc;
	char strdd[] = "String dd";
	d->data = &strdd;

	printf("before:	%i\n", ft_list_size(head));
	ft_list_remove_if(&head, strdd, remove_node);
	printf("after:	%i\n", ft_list_size(head));

	return (0);
}
