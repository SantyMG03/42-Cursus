/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: santmore <santmore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 18:29:57 by santmore          #+#    #+#             */
/*   Updated: 2025/07/15 18:37:32 by santmore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_stkadd_front(t_stack **stack, t_stack *new)
{
	new->next = (*stack);
	(*stack) = new;
}

void	ft_stkadd_back(t_stack **stack, t_stack *new)
{
	t_stack *aux;
	
	if (!(*stack))
	{
		(*stack) = new;
		return ;
	}
	if (new)
	{
		aux = (*stack);
		while (aux->next != NULL)
			aux = aux->next;
		aux->next = new;
	}
}
