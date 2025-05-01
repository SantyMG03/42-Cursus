/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: santmore <santmore@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 11:59:18 by santmore          #+#    #+#             */
/*   Updated: 2025/04/25 12:23:42 by santmore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	atoi(const char *ptr)
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

// Comprueba los si el elemento es un espacio
int	ft_isspace(int c)
{
	if (c == 9 || c == 10 || c == 11 || c == 12 || c == 13 || c == 32)
		return (1);
	return (0);
}
