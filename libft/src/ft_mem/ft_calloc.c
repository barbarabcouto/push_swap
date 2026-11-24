/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdavid-b <bdavid-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 20:50:34 by bdavid-b          #+#    #+#             */
/*   Updated: 2026/01/23 20:50:36 by bdavid-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	n_size;
	void	*ptr;

	n_size = nmemb * size;
	if (size != 0 && nmemb > __SIZE_MAX__ / size)
		return (NULL);
	ptr = malloc(n_size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, n_size);
	return (ptr);
}
