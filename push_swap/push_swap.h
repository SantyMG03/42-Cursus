/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: santmore <santmore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 01:30:25 by santmore          #+#    #+#             */
/*   Updated: 2025/06/16 01:44:25 by santmore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

typedef struct s_algoritmia
{
	int	last_b;
	int	min_a;
	int	min_b;
	int	moves_a;
	int	moves_b;
	int	pos;
	int	moves_b_ra;
	int	moves_b_rra;
	int	moves_a_ra;
	int	moves_a_rra;
}	t_algoritmia;

typedef struct s_stack
{
	int	val;
	int	pos;
	struct s_stack *next;
}	t_stack;

typedef struct s_parameter
{
	char	*line;
	char	**split;
	char	**args;
	int		len_a;
	int		len;
	t_stack *a;
	t_stack *b;
	t_stack	*perfect;	
}	t_parameters;

int		check_len(t_stack **a);
int		check_ord(t_stack **a, int len);
int		check_atoi(const char *str);
void	check_dup(t_stack **a);
void	check_is_num(char **split);

t_stack	*fill_stack(t_parameters *param, char **split);
char	**fill_split(t_parameters *param, char **args);
void	fill_pos(t_stack **a);

#endif
