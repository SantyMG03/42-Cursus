/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: santmore <santmore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 18:58:10 by santmore          #+#    #+#             */
/*   Updated: 2025/07/08 12:51:28 by santmore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_err(int num)
{
	num = -1;
	write (2, "Error\n", 6);
	exit (num);
}

int	ft_len(char *s)
{
	int	i;

	if (!*s)
		return (20);
	i = 0;
	while (s[i])
		i++;
	return (i);
}

// Auxiliary of ft_atoi
static int	ft_isspace(int c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	return (0);
}

int	ft_atoi(const char *ptr)
{
	int	res;
	int	i;
	int	signo;

	i = 0;
	res = 0;
	signo = 1;
	while (ft_isspace(ptr[i]))
		i++;
	if (ptr[i] == '+' && ptr[i + 1] != '-')
		i++;
	if (ptr[i] == '-')
	{
		signo = -1;
		i++;
	}
	while (ptr[i] != '\0' && ptr[i] >= '0' && ptr[i] <= '9')
	{
		res *= 10;
		res += ptr[i] - 48;
		i++;
	}
	return (res * signo);
}
