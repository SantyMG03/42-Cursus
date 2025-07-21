/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: santmore <santmore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 18:57:02 by santmore          #+#    #+#             */
/*   Updated: 2025/07/16 11:03:19 by santmore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	start_algoritmia(t_algoritmia *alg, t_parameters *p)
{
	alg->last_b = ft_last(&p->b);
	alg->max_b = ft_max(&p->b);
	alg->min_b = ft_min(&p->b);
	alg->moves_b_ra = 0;
	alg->moves_b_rra = 0;
	alg->moves_a_ra = 0;
	alg->moves_a_rra = 0;
	alg->moves_a = 0;
	alg->moves_b = 0;
	alg->less_moves = INT_MAX;
	alg->pos = 0;
	fill_pos(&p->a);
	fill_pos(&p->b);
	search_less_pos(&p->a, &p->b, alg);
	make_pos(alg, p);
}

void	push_swap(t_parameters *param, char **args)
{
	param->split = fill_split(param, args);
	check_is_num(param->split);
	param->a = fill_stack(param, param->split);
	check_dup(&(param->a));
	param->b = NULL;
	param->len = check_len(&param->a);
	param->len_a = check_len(&param->a);
	order(param);
}

t_parameters	*ft_init_parameters(t_parameters *param)
{
	param = (t_parameters *)malloc(sizeof(t_parameters));
	if (param == NULL)
		ft_err(0);
	param->line = NULL;
	param->split = NULL;
	param->len = 0;
	param->a = NULL;
	param->b = NULL;
	return (param);
}

int	main(int argc, char *argv[])
{
	t_parameters	*param;

	param = NULL;
	if (argc < 2)
		return (0);
	param = ft_init_parameters(param);
	push_swap(param, argv);
	free_stack(&param->a);
	free(param);
	param = NULL;
	exit(EXIT_SUCCESS);
}
