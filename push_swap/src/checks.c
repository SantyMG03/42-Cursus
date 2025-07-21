/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: santmore <santmore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 15:23:17 by santmore          #+#    #+#             */
/*   Updated: 2025/07/21 11:44:50 by santmore         ###   ########.fr       */
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
			if (tmp1->val == tmp2->val)
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
			sign = -sign;
		str++;
	}
	if (!*str)
		return (0);
	while (*str)
	{
		if (((sign * num) <= INT_MAX && (sign * num) >= INT_MIN)
			&& (*str <= '9' && *str >= '0'))
			num = (num * 10) + (*str++ - '0');
		else
			return (0);
	}
	if (((sign * num) > INT_MAX || (sign * num) < INT_MIN))
		return (0);
	return (42);
}

void	check_is_num(char **split)
{
	int	i;

	if (!split[0])
		ft_err(0);
	i = -1;
	while (split[++i])
	{
		if (check_atoi(split[i]) == 0 || ft_len(split[i]) > 12)
			ft_err(0);
	}
}
