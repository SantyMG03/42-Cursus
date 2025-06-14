/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointers.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: santmore <santmore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 17:17:39 by santmore          #+#    #+#             */
/*   Updated: 2025/06/14 17:55:51 by santmore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_len_pointer(unsigned long long ptr);
static void	ft_search_pointer(unsigned long long ptr);

int	ft_print_pointer(unsigned long long ptr)
{
	int	size;

	size = 0;
	size += ft_print_string("0x");
	if (ptr == 0)
		size += ft_print_char('0');
	else
	{
		ft_search_pointer(ptr);
		size += ft_len_pointer(ptr);
	}
	return (size);
}

static int	ft_len_pointer(unsigned long long ptr)
{
	int	len;

	len = 0;
	while (ptr > 0)
	{
		len++;
		ptr /= 16;
	}
	return (len);
}

static void	ft_search_pointer(unsigned long long ptr)
{
	if (ptr >= 16)
	{
		ft_search_pointer(ptr / 16);
		ft_search_pointer(ptr % 16);
	}
	else
	{
		if (ptr < 16)
			ft_print_char(ptr + '0');
		else
			ft_print_char(ptr - 10 + 'a');
	}
}
