/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdavid-b <bdavid-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 20:46:00 by bdavid-b          #+#    #+#             */
/*   Updated: 2026/01/23 20:46:02 by bdavid-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char	*s)
{
	void	*ptr;
	size_t	s_size;
	size_t	i;
	char	*ns;

	i = 0;
	s_size = ft_strlen(s);
	ptr = malloc(s_size + 1);
	if (!ptr)
		return (NULL);
	ns = (char *)ptr;
	while (s[i] != '\0')
	{
		ns[i] = s[i];
		i++;
	}
	ns[i] = '\0';
	return (ns);
}
