/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_algoritmia.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: santmore <santmore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 18:40:03 by santmore          #+#    #+#             */
/*   Updated: 2025/07/15 18:52:30 by santmore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_min(t_stack **b)
{
	t_stack	*aux;
	int		min;

	if (*b == NULL)
		return (0);
	aux = (*b);
	min = aux->val;
	while (aux)
	{
		if (aux->val < min)
			min = aux->val;
		aux = aux->next;
	}
	aux = NULL;
	return (min);
}

int	ft_min_array(int *arr)
{
	int	res;
	int	i;

	res = INT_MAX;
	i = -1;
	while (++i != 4)
	{
		if (arr[i] < res)
			res = arr[i];
	}
	return (res);
}

int	ft_max(t_stack **b)
{
	t_stack	*aux;
	int		max;

	if (*b == NULL)
		return (0);
	aux = (*b);
	max = aux->val;
	while (aux)
	{
		if (aux->val > max)
			max = aux->val;
		aux = aux->next;
	}
	aux = NULL;
	return (max);
}

int	ft_max_int(int a, int b)
{
	if (a >= b)
		return (a);
	else
		return (b);
}

int	ft_last(t_stack **b)
{
	t_stack *aux;

	if (*b == NULL)
		return (0);
	aux = (*b);
	while (aux->next)
		aux = aux->next;
	return (aux->val);
}
