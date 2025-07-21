/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   finish.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: santmore <santmore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 12:53:49 by santmore          #+#    #+#             */
/*   Updated: 2025/07/08 13:07:05 by santmore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_stack(t_stack **a)
{
	t_stack	*aux;

	while ((*a))
	{
		aux = (*a);
		(*a) = (*a)->next;
		free(aux);
		aux = NULL;
	}
}

int	end_search(t_stack **a, int min)
{
	t_stack	*aux;
	int		moves;
	int		moves2;

	aux = (*a);
	moves = 0;
	while (aux->val != min)
	{
		aux = aux->next;
		moves++;
	}
	moves2 = check_len(a) - moves;
	if (moves <= moves2)
		return (moves);
	else
		return (-moves2);
}

void	reorder(t_stack **a, int min, char c)
{
	int	move;

	move = end_search(a, min);
	if (move > 0)
	{
		while (--move >= 0)
			r_stack(a, c);
	}
	else
	{
		while (++move <= 0)
			rr_stack(a, c);
	}
}

void	finish(t_parameters *p)
{
	int	tmp;
	int	move;

	reorder(&p->b, ft_max(&p->b), 'b');
	tmp = ft_last(&p->a);
	move = p->b->val;
	if (tmp > move)
		rr_stack(&p->a, 'a');
	else
		p_stack(&p->b, &p->a, 'a');
	tmp = ft_last(&p->a);
	move = ft_max(&p->a);
	while (check_len(&p->a) != p->len)
	{
		if (tmp > p->b->val && tmp != move)
		{
			rr_stack(&p->a, 'a');
			tmp = ft_last(&p->a);
		}
		else
			p_stack(&p->b, &p->a, 'a');
	}
	reorder(&p->a, ft_min(&p->a), 'a');
}
