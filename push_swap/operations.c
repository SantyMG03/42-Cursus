/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: santmore <santmore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 11:52:26 by santmore          #+#    #+#             */
/*   Updated: 2025/06/30 12:09:20 by santmore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	p_stack(t_stack **a, t_stack **b, char c)
{
	t_stack	*aux;

	aux = (t_stack *)malloc(sizeof(t_stack));
	if (aux == NULL)
		ft_err(0);
	aux->val = (*a)->val;
	aux->next = NULL;
	ft_stkadd_front(b, aux);
	aux = *a;
	*a = (*a)->next;
	if (c == 'a')
		write(1, "pa\n", 3);
	else if (c == 'b')
		write(1, "pb\n", 3);
	free(aux);
	aux = NULL;
}

void	s_stack(t_stack **top, char c)
{
	int	aux;

	if ((*top) && ((*top)->next))
	{
		aux = (*top)->val;
		(*top)->val = (*top)->next->val;
		(*top)->next->val = aux;
	}
	if (c == 'a')
		write(1, "sa\n", 3);
	if (c == 'b')
		write(1, "sb\n", 3);
}

void	ss_stack(t_stack **a, t_stack **b)
{
	s_stack(a, ' ');
	s_stack(b, ' ');
	write(1, "ss\n", 3);
}
