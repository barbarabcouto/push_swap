/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdavid-b <bdavid-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 20:21:45 by bdavid-b          #+#    #+#             */
/*   Updated: 2026/01/23 20:21:47 by bdavid-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

static void	sort_stack(t_stack_node **a, t_stack_node **b)
{
	if (stack_len(*a) == 2)
		sa(a, FALSE);
	else if (stack_len(*a) == 3)
		sort_three_numbers(a);
	else
		turk_sort(a, b);
}

static char	**parse_args(int argc, char **argv)
{
	if (argc == 2)
		return (split(argv[1], ' '));
	return (NULL);
}

int	main(int argc, char **argv)
{
	t_stack_node	*a;
	t_stack_node	*b;
	char			**split_argv;

	a = NULL;
	b = NULL;
	if (argc == 1 || (argc == 2 && !argv[1][0]))
		return (1);
	split_argv = parse_args(argc, argv);
	if (split_argv)
		argv = split_argv;
	init_stack_a(&a, argv + 1, split_argv);
	if (!stack_sorted(a))
		sort_stack(&a, &b);
	free_stack(&a);
	if (split_argv)
		free_argv(split_argv);
	return (0);
}
