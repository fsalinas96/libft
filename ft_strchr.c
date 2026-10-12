/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsalinas <fsalinas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 12:30:52 by fsalinas          #+#    #+#             */
/*   Updated: 2026/10/12 13:04:51 by fsalinas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	target;

	target = (unsigned char) c;
	while (*s)
	{
		if ((unsigned char)*s == target)
			return ((char *)s);
		s++;
	}
	if ((unsigned char)*s == target)
		return ((char *)s);
	return (NULL);
}
