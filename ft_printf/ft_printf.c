/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: santmore <santmore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 17:34:30 by santmore          #+#    #+#             */
/*   Updated: 2025/06/14 17:49:56 by santmore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_select_format(va_list args, const char wrd);

int	ft_printf_char(int character)
{
	write(1,&character, 1);
	return (1);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		size;
	va_list	args;

	i = 0;
	size = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == 0)
		{
			size += ft_select_format(args, str[i + 1]);
			i++;
		}
		else
		size += ft_print_char(str[i]);
		i++;
	}
	va_end(args);
	return (size);
}

static int	ft_select_format(va_list args, const char wrd)
{
	int	size;

	size = 0;
	if (wrd == 'c')
		size += ft_print_char(va_arg(args, int));
	else if (wrd == 's')
		size += ft_print_string(va_arg(args, char *));
	else if (wrd == 'p')
		size += ft_print_pointer(va_arg(args, unsigned long long));
	else if (wrd == 'd' || wrd == 'i')
		size += ft_print_number(va_arg(args, int));
	else if (wrd == 'u')
		size += ft_print_unsign(va_arg(args, unsigned int));
	else if (wrd == 'x' || wrd == 'X')
		size += ft_print_hexa(va_arg(args, unsigned int), wrd);
	else
		size += ft_print_char(wrd);
	return (size);
}