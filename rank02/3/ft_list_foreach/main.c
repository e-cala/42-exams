#include <stdlib.h>
#include <stdio.h>
#include "ft_list.h"

;int	ft_list_size(t_list *head)
{
	int	i;

	i = 0;
	while (head)
	{
		i++;
		head = head->next;
	}
	return (i);
}

void	ft_list_foreach(t_list *begin_list, void (*f)(void *));

int	main(void)
{
	t_list	*head = malloc(sizeof(t_list));
	t_list	*a = malloc(sizeof(t_list));
	t_list	*b = malloc(sizeof(t_list));
	t_list	*c = malloc(sizeof(t_list));
	t_list	*d = malloc(sizeof(t_list));
	
	head->next = a;
	a->next = b;
	b->next = c;
	c->next = d;
	d->next = NULL;

	printf("ft_list_size:	%i\n", ft_list_size(head));

	return (0);
}
