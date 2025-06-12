/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: santmore <santmore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 11:43:54 by santmore          #+#    #+#             */
/*   Updated: 2025/06/12 12:03:05 by santmore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_print_char(int character);
int	ft_printf(const char *str, ...);
int	ft_print_string(char *str);
int	ft_print_num(int n);
int	ft_print_unsign(unsigned int n);
int	ft_print_hexa(unsigned int n, const char w);
int	ft_print_pointer(unsigned long long ptr);

#endif
