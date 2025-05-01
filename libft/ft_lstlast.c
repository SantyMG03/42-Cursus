/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: santmore <santmore@student.42malaga.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-05-01 09:36:07 by santmore          #+#    #+#             */
/*   Updated: 2025-05-01 09:36:07 by santmore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*act;
	t_list	*ant;

	act = lst;
	ant = NULL;
	while (act != NULL)
	{
		ant = act;
		act = act->next;
	}
	return (ant);
}
