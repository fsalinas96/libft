/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsalinas <fsalinas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 20:06:22 by fsalinas          #+#    #+#             */
/*   Updated: 2026/10/12 13:04:04 by fsalinas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (src > dest)
			((char *)dest)[i] = ((char *)src)[i];
		if (src < dest)
			((char *)dest)[n - 1 - i] = ((char *)src)[n - 1 - i];
		i++;
	}
	return (dest);
}
