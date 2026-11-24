/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdavid-b <bdavid-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 20:45:41 by bdavid-b          #+#    #+#             */
/*   Updated: 2026/01/23 20:45:44 by bdavid-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t			size_s1;
	size_t			size_s2;
	size_t			i;
	size_t			j;
	char			*conct;

	size_s1 = ft_strlen(s1);
	size_s2 = ft_strlen(s2);
	conct = malloc(size_s1 + size_s2 + 1);
	if (conct == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		conct[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		conct[i + j] = s2[j];
		j++;
	}
	conct[i + j] = '\0';
	return (conct);
}
