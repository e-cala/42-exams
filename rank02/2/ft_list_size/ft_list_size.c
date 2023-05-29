/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecabanas <ecabanas@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 11:20:26 by ecabanas          #+#    #+#             */
/*   Updated: 2023/05/29 11:29:22 by ecabanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct s_list	t_list;

struct s_list
{
	struct s_list	*next;
	void			*data;
};

int	ft_list_size(t_list *begin_list)
{
	int	count;

	count = 0;
	while (begin_list)
	{
		count++;
		begin_list = begin_list->next;
	}
	return (count);
}
