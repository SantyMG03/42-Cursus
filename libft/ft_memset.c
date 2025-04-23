/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: santmore <santmore@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 18:52:36 by santmore          #+#    #+#             */
/*   Updated: 2025/04/23 18:52:51 by santmore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memset(void *b, int c, size_t len)
{
    unsigned char   *s;
    size_t          i;

    i = 0;
    s = b;
    while (i < len)
    {
        s[i] = (unsigned char)c;
        i++;
    }
    return (b);
}