/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsalinas <fsalinas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 12:30:32 by fsalinas          #+#    #+#             */
/*   Updated: 2026/10/10 16:37:42 by fsalinas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t			len;
	unsigned char	target;

	len = ft_strlen(s);
	target = (unsigned char)c;
	while (len > 0)
	{
		if ((unsigned char)s[len] == target)
		{
			return ((char *)s + len);
		}
		len--;
	}
	if ((unsigned char)s[len] == target)
		return ((char *)s);
	return (NULL);
}
