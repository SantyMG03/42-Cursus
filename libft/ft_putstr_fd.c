/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: santmore <santmore@student.42malaga.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-05-01 23:36:21 by santmore          #+#    #+#             */
/*   Updated: 2025-05-01 23:36:21 by santmore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

ft_putstr_fd(char *str, int fd)
{
	if (!str)
        return;
	while (*str)
	{
		write(fd, str, 1);
		str++;
	}
}
