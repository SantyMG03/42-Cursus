/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: santmore <santmore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 15:23:17 by santmore          #+#    #+#             */
/*   Updated: 2025/06/23 16:41:01 by santmore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_len(t_stack **a)
{
	int		len;
	t_stack	*tmp;

	len = 0;
	tmp = *a;
	while (tmp)
	{
		len++;
		tmp = tmp->next;
	}
	tmp = NULL;
	return (len);
}

int	check_ord(t_stack **a, int len)
{
	t_stack	*tmp;

	if (check_len(a) != len)
		return (1);
	tmp = *a;
	while (tmp && tmp->next)
	{
		if (tmp->val < tmp->next->val)
			tmp = tmp->next;
		else
			return (1);
	}
	return (0);
}

void	check_dup(t_stack **a)
{
	t_stack	*tmp1;
	t_stack	*tmp2;

	tmp1 = *a;
	while (tmp1)
	{
		tmp2 = tmp1->next;
		while (tmp2)
		{
			if (tmp1->next == tmp2->val)
				ft_err(0);
			tmp2 = tmp2->next;
		}
		tmp1 = tmp1->next;
	}
}

int	check_atoi(const char *str)
{
	int				sign;
	long long int	num;

	sign = 1;
	num = 0;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
}
