/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointers.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: santmore <santmore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 17:17:39 by santmore          #+#    #+#             */
/*   Updated: 2025/06/15 19:01:20 by santmore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//static int	ft_len_pointer(unsigned long long ptr);
static int	ft_search_pointer(unsigned long long ptr);

int	ft_print_pointer(unsigned long long ptr)
{
	int	size;

	size = 0;
	if (ptr == 0)
		size += ft_print_str("(nil)");
	else
	{
		size += ft_print_str("0x");
		size += ft_search_pointer(ptr);
	}
	return (size);
}
/*
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
}*/

static int	ft_search_pointer(unsigned long long ptr)
{
	int	count;

	count = 0;
	if (ptr >= 16)
	{
		count += ft_search_pointer(ptr / 16);
		count += ft_search_pointer(ptr % 16);
	}
	else
	{
		if (ptr < 10)
			count += ft_print_char(ptr + '0');
		else
			count += ft_print_char(ptr - 10 + 'a');
	}
	return (count);
}
