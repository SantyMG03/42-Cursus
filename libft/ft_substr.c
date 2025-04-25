/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: santmore <santmore@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 12:39:11 by santmore          #+#    #+#             */
/*   Updated: 2025/04/25 12:49:24 by santmore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t	tam;

	substr = malloc(len);
	if (!substr)
		return (NULL);
	i = 0;
	tam = 0;
	while (s[i])
	{
		if (i >= start && tam < len)
		{
			substr[tam] = s[i];
			tam++;
		}
		i++;
	}
	return (substr);
}
