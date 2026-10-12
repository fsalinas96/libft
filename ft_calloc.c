/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsalinas <fsalinas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 21:44:36 by fsalinas          #+#    #+#             */
/*   Updated: 2026/10/12 13:00:31 by fsalinas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*str;
	size_t	i;
	size_t	tot;

	i = 0;
	if (size != 0 && nmemb > (size_t) - 1 / size)
		return (NULL);
	tot = (nmemb * size);
	str = malloc(tot);
	if (!str)
		return (NULL);
	while (i < tot)
	{
		str[i] = 0;
		i++;
	}
	return (str);
}
