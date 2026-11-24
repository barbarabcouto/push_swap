/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdavid-b <bdavid-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 20:27:32 by bdavid-b          #+#    #+#             */
/*   Updated: 2026/01/23 20:27:34 by bdavid-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include "../libft/inc/libft.h"
# include "../libft/inc/ft_printf.h"

# define TRUE 1
# define FALSE 0

typedef int	t_bool;

typedef struct s_stack_node
{
	int					nbr;
	int					index;
	int					push_cost;
	t_bool				above_median;
	t_bool				cheapest;
	struct s_stack_node	*target_node;
	struct s_stack_node	*next;
	struct s_stack_node	*prev;
}	t_stack_node;

int				has_syntax_error(char *str_n);
int				has_duplicate(t_stack_node *a, int n);
void			free_stack(t_stack_node **stack);
void			free_argv(char **argv);
void			exit_with_error(t_stack_node **a, char **argv_to_free);

void			init_stack_a(t_stack_node **a, char **argv, char **split_argv);
char			**split(char *s, char c);

void			initialize_nodes_a_to_b(t_stack_node *a, t_stack_node *b);
void			initialize_nodes_b_to_a(t_stack_node *a, t_stack_node *b);
void			update_node_indices(t_stack_node *stack);
void			mark_cheapest_node(t_stack_node *stack);
t_stack_node	*find_cheapest_node(t_stack_node *stack);
void			prep_stack_for_push(t_stack_node **s, t_stack_node *n, char c);

int				stack_len(t_stack_node *stack);
t_stack_node	*find_last(t_stack_node *stack);
t_bool			stack_sorted(t_stack_node *stack);
t_stack_node	*find_min(t_stack_node *stack);
t_stack_node	*find_max(t_stack_node *stack);

void			sa(t_stack_node **a, t_bool print);
void			sb(t_stack_node **b, t_bool print);
void			ss(t_stack_node **a, t_stack_node **b, t_bool print);
void			ra(t_stack_node **a, t_bool print);
void			rb(t_stack_node **b, t_bool print);
void			rr(t_stack_node **a, t_stack_node **b, t_bool print);
void			rra(t_stack_node **a, t_bool print);
void			rrb(t_stack_node **b, t_bool print);
void			rrr(t_stack_node **a, t_stack_node **b, t_bool print);
void			pa(t_stack_node **a, t_stack_node **b, t_bool print);
void			pb(t_stack_node **b, t_stack_node **a, t_bool print);

void			sort_three_numbers(t_stack_node **a);
void			turk_sort(t_stack_node **a, t_stack_node **b);
void			min_on_top(t_stack_node **a);

#endif