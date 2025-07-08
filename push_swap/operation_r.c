/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_r.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: santmore <santmore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 12:03:09 by santmore          #+#    #+#             */
/*   Updated: 2025/07/08 12:19:13 by santmore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	r_stack(t_stack **stack, char c)
{
	t_stack	*aux;

	aux = *stack;
	(*stack) = (*stack)->next;
	aux->next = NULL;
	ft_stkadd_back(stack, aux);
	if (c == 'a')
		write(1, "ra\n", 3);
	else if (c == 'b')
		write(1, "rb\n", 3);
}

void	r_rboth(t_stack **a, t_stack **b)
{
	r_stack(a, ' ');
	r_stack(b, ' ');
	write(1, "rr\n", 3);
}

void	rr_stack(t_stack **stack, char c)
{
	t_stack *aux;
	t_stack *stack_aux;

	stack_aux = (*stack);
	while (stack_aux->next->next)
		stack_aux = stack_aux->next;
	aux = stack_aux->next;
	stack_aux->next = NULL;
	ft_stkadd_back(stack, aux);
	if (c == 'a')
		write(1, "rra\n", 4);
	else if(c == 'b')
		write(1, "rrb\n", 4);
}

void	rr_rboth(t_stack **a, t_stack **b)
{
	rr_stack(a, ' ');
	rr_stack(b, ' ');
	write(1, "rrr\n", 4);
}
