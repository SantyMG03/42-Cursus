/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: santmore <santmore@student.42malaga.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-05-01 09:28:52 by santmore          #+#    #+#             */
/*   Updated: 2025-05-01 09:28:52 by santmore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*aux;
	int		size;

	aux = lst;
	size = 0;
	while(aux != NULL)
	{
		aux = aux->next;
		size++;
	}
	return (size);
}
