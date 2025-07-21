/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   order.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: santmore <santmore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 11:05:42 by santmore          #+#    #+#             */
/*   Updated: 2025/07/21 11:55:42 by santmore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	search_less_moves(t_algoritmia *alg, t_stack **a, t_stack **b)
{
	int	op[4];
	int	res;
	
	alg->moves_a_rra = check_len(a) - alg->moves_a_ra + 2;
	alg->moves_b_rra = check_len(b) - alg->moves_b_ra;
	op[0] = ft_max_int(alg->moves_a_ra, alg->moves_b_ra);
	op[1] = ft_max_int(alg->moves_a_rra, alg->moves_b_rra);
	op[2] = alg->moves_a_ra + alg->moves_b_rra;
	op[3] = alg->moves_a_rra + alg->moves_b_ra;
	res = ft_min_arr(op);
	if (res < alg->less_moves)
	{
		if (res == op[0] || res == op[2])
			alg->moves_a = alg->moves_a_ra;
		else
			alg->moves_a = -(alg->moves_a_ra);
		if (res == op[0] || res == op[3])
			alg->moves_b = alg->moves_b_ra;
		else
			alg->moves_b = -(alg->moves_b_rra);
		alg->less_moves = res;
	}
	alg->last_b = ft_last(b);
	return (alg->less_moves);
}

int	condition_of_slp(t_stack **aux0, t_stack **aux1, t_algoritmia *alg)
{
	
}