/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdavid-b <bdavid-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 20:24:46 by bdavid-b          #+#    #+#             */
/*   Updated: 2026/01/23 20:24:48 by bdavid-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	sort_three_numbers(t_stack_node **a)
{
	t_stack_node	*biggest_node;

	biggest_node = find_max(*a);
	if (biggest_node == *a)
		ra(a, FALSE);
	else if ((*a)->next == biggest_node)
		rra(a, FALSE);
	if ((*a)->nbr > (*a)->next->nbr)
		sa(a, FALSE);
}
