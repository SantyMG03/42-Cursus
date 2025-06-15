/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: santmore <santmore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 12:16:33 by santmore          #+#    #+#             */
/*   Updated: 2025/06/15 18:25:26 by santmore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_length_hexa(unsigned int num);
static void	ft_search_hexa(unsigned int num, const char word);

int	ft_print_hexa(unsigned int num, const char word)
{
	if (num == 0)
		return (ft_print_char('0'));
	else
		ft_search_hexa(num, word);
	return (ft_length_hexa(num));
}

static void	ft_search_hexa(unsigned int num, const char word)
{
	if (num >= 16)
	{
		ft_search_hexa(num / 16, word);
		ft_search_hexa(num % 16, word);
	}
	else
	{
		if (num < 10)
			ft_print_char(num + '0');
		else
		{
			if (word == 'x')
				ft_print_char(num - 10 + 'a');
			if (word == 'X')
				ft_print_char(num - 10 + 'A');
		}
	}
}

static int	ft_length_hexa(unsigned int num)
{
	int	len;

	len = 0;
	while (num != 0)
	{
		len++;
		num = num / 16;
	}
	return (len);
}
