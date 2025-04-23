/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: santmore <santmore@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 16:38:01 by santmore          #+#    #+#             */
/*   Updated: 2025/04/23 19:00:27 by santmore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
    unsigned char	*d;
    const unsigned char	*s;
    size_t	i;

    if (!dst && !src)
        return (NULL);
    d = dst;
    s = src;
    i = 0;
    while (i < n)
    {
        d[i] = s[i];
        i++;
    }
	return (dst);
}