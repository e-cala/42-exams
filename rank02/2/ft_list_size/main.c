/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecabanas <ecabanas@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 11:22:01 by ecabanas          #+#    #+#             */
/*   Updated: 2023/05/29 11:30:00 by ecabanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

typedef	struct	s_list
{
	struct s_list	*next;
	void			*data;
}					t_list;

int	ft_list_size(t_list *begin_list);

int	main(void)
{
	t_list	*head = malloc (1 + sizeof(t_list));
	t_list	*n1 = malloc (1 + sizeof(t_list));
	t_list	*n2 = malloc (1 + sizeof(t_list));
	t_list	*n3 = malloc (1 + sizeof(t_list));

	head->next = n1;
	n1->next = n2;
	n2->next = n3;
	n3->next = NULL;
	printf("ft_list_size:	%i\n", ft_list_size(head));	
	return (0);
}
