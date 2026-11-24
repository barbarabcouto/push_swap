/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdavid-b <bdavid-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 20:50:25 by bdavid-b          #+#    #+#             */
/*   Updated: 2026/01/23 20:50:25 by bdavid-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*var_s;
	size_t			i;

	var_s = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (var_s[i] == (unsigned char) c)
			return (&var_s[i]);
		i++;
	}
	return (NULL);
}
