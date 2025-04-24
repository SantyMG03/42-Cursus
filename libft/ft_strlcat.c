/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: santmore <santmore@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 19:14:37 by santmore          #+#    #+#             */
/*   Updated: 2025/04/24 19:23:38 by santmore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	strlcat(char *dst, const char *src, size_t size)
{
	size_t	dLen;
	size_t	sLen;
	size_t	i;

	dLen = ft_strlen(dst);
	sLen = ft_strlen(src);
	if (size <= dLen)
		return (size + sLen);
	i = 0;
	while (src[i] != '\0' && (dLen + i) < (size - 1))
	{
		dst[dLen + i] = src[i];
		i++;
	}
	dst[dLen + i] = '\0';
	return (dLen + sLen);
}