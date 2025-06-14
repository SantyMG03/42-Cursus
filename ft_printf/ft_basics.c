/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_basics.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: santmore <santmore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 11:52:21 by santmore          #+#    #+#             */
/*   Updated: 2025/06/14 17:53:39 by santmore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_str(char *str)
{
	int	size;

	size = 0;
	if (str == 0)
	{
		return (ft_print_str("(null)"));
	}
	while (str[size])
	{
		size += ft_print_char(str[size]);
	}
	return (size);
}

int	ft_print_num(int n)
{
	int	size;

	size = 0;
	if (n == 0)
		size += ft_print_char('0');
	if (n == -2147483648)
	{
		size += ft_print_str("-2147483648");
		return (size);
	}
	if (n < 0)
	{
		size += ft_print_char('-');
		n = -n;
	}
	if (n > 0)
		size += ft_print_unsign((unsigned int) n);
	return (size);
}

int	ft_print_unsign(unsigned int n)
{
	int	size;

	size = 0;
	if (n == 0)
		size += ft_print_char('0');
	else
	{
		if (n / 10 != 0)
			ft_print_unsign(n / 10);
		ft_print_char((n % 10) + '0');
		while (n > 0)
		{
			n /= 10;
			size++;
		}
	}
	return (size);
}
