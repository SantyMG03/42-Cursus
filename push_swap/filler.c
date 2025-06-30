/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: santmore <santmore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 10:57:13 by santmore          #+#    #+#             */
/*   Updated: 2025/06/30 11:49:34 by santmore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*fill_stack(t_parameters *params, char **split)
{
	int		i;
	t_stack	*aux;

	i = 0;
	while (split[i])
	{
		aux = malloc(sizeof(t_stack));
		if (aux == NULL)
			ft_err(0);
		aux->val = ft_atoi(split[i++]);
		aux->pos = i;
		aux->next = NULL;
		ft_stkadd_back(&params->a, aux);
		aux = NULL;
	}
	free(aux);
	aux = NULL;
	return (params->a);
}

char	**fill_split(t_parameters *params, char **args)
{
	params->split = &args[1];
	return (params->split);
}

void	fill_pos(t_stack **a)
{
	int		i;
	t_stack	*aux;

	if ((*a) == NULL)
		return ;
	i = 0;
	aux = (*a);
	while (aux)
	{
		aux->pos = ++i;
		aux = aux->next;
	}
	aux = NULL;
}
