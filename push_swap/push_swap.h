/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: santmore <santmore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 01:30:25 by santmore          #+#    #+#             */
/*   Updated: 2025/07/16 10:50:53 by santmore         ###   ########.fr       */
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
	int	max_b;
	int	min_b;
	int	moves_a;
	int	moves_b;
	int	pos;
	int	moves_b_ra;
	int	moves_b_rra;
	int	moves_a_ra;
	int	moves_a_rra;
	int	less_moves;
}	t_algoritmia;

typedef struct s_stack
{
	int				val;
	int				pos;
	struct s_stack	*next;
}	t_stack;

typedef struct s_parameter
{
	char	*line;
	char	**split;
	char	**args;
	int		len_a;
	int		len;
	t_stack	*a;
	t_stack	*b;
	t_stack	*perfect;	
}	t_parameters;

// Checks
int				check_len(t_stack **a);
int				check_ord(t_stack **a, int len);
int				check_atoi(const char *str);
void			check_dup(t_stack **a);
void			check_is_num(char **split);
// Fill info
t_stack			*fill_stack(t_parameters *param, char **split);
char			**fill_split(t_parameters *param, char **args);
void			fill_pos(t_stack **a);
// Operations
void			p_stack(t_stack **a, t_stack **b, char c);
void			s_stack(t_stack **top, char c);
void			r_stack(t_stack **stack, char c);
void			r_rboth(t_stack **a, t_stack **b);
void			rr_stack(t_stack **stack, char c);
void			rr_rboth(t_stack **a, t_stack **b);
void			ft_stkadd_front(t_stack **stack, t_stack *neww);
void			ft_stkadd_back(t_stack **stack, t_stack *neww);
// Sort
int				search_less_moves(t_algoritmia *alg, t_stack **a, t_stack **b);
int				order3(t_stack **a, int min, int max);
void			search_less_pos(t_stack **a, t_stack **b, t_algoritmia *alg);
void			order(t_parameters *param);
// Pos
void			make_pos(t_algoritmia *alg, t_algoritmia *param);
void			make_pos_together(t_algoritmia *alg, t_parameters *param);
// Util alg
int				ft_min(t_stack **b);
int				ft_min_arr(int *arr);
int				ft_max(t_stack **b);
int				ft_max_int(int a, int b);
int				ft_last(t_stack **b);
// Prog
void			start_alg(t_algoritmia *alg, t_parameters param);
void			push_swap(t_parameters *param, char **args);
t_parameters	*ft_init_parameters(t_parameters *param);
// Final sort
void			reorder(t_stack **a, int min, char c);
void			finish(t_parameters *param);
void			free_stack(t_stack **a);
// Util funcs
void			ft_err(int num);
int				ft_len(char *str);
int				ft_atoi(const char *str);

#endif
