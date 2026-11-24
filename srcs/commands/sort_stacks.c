/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stacks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdavid-b <bdavid-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 20:24:56 by bdavid-b          #+#    #+#             */
/*   Updated: 2026/01/23 20:24:58 by bdavid-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

static void	rotate_both(t_stack_node **a,
						t_stack_node **b,
						t_stack_node *cheapest_node)
{
	while (*b != cheapest_node->target_node
		&& *a != cheapest_node)
		rr(a, b, FALSE);
	update_node_indices(*a);
	update_node_indices(*b);
}

static void	rev_rotate_both(t_stack_node **a,
								t_stack_node **b,
								t_stack_node *cheapest_node)
{
	while (*b != cheapest_node->target_node
		&& *a != cheapest_node)
		rrr(a, b, FALSE);
	update_node_indices(*a);
	update_node_indices(*b);
}

static void	move_a_to_b(t_stack_node **a, t_stack_node **b)
{
	t_stack_node	*cheapest_node;

	cheapest_node = find_cheapest_node(*a);
	if (cheapest_node->above_median
		&& cheapest_node->target_node->above_median)
		rotate_both(a, b, cheapest_node);
	else if (!(cheapest_node->above_median)
		&& !(cheapest_node->target_node->above_median))
		rev_rotate_both(a, b, cheapest_node);
	prep_stack_for_push(a, cheapest_node, 'a');
	prep_stack_for_push(b, cheapest_node->target_node, 'b');
	pb(b, a, FALSE);
}

static void	move_b_to_a(t_stack_node **a, t_stack_node **b)
{
	prep_stack_for_push(a, (*b)->target_node, 'a');
	pa(a, b, FALSE);
}

void	turk_sort(t_stack_node **a, t_stack_node **b)
{
	int	len_a;

	len_a = stack_len(*a);
	if (len_a-- > 3 && !stack_sorted(*a))
		pb(b, a, FALSE);
	if (len_a-- > 3 && !stack_sorted(*a))
		pb(b, a, FALSE);
	while (len_a-- > 3 && !stack_sorted(*a))
	{
		initialize_nodes_a_to_b(*a, *b);
		move_a_to_b(a, b);
	}
	sort_three_numbers(a);
	while (*b)
	{
		initialize_nodes_b_to_a(*a, *b);
		move_b_to_a(a, b);
	}
	update_node_indices(*a);
	min_on_top(a);
}
