/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsalinas <fsalinas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 20:06:14 by fsalinas          #+#    #+#             */
/*   Updated: 2026/10/09 21:31:27 by fsalinas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)s)[i] = '\0';
		i++;
	}
}

// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
// 	char str2[] = "1529956";
// 	int str[] = {1, 5, 2, 9, 9, 5, 6};
// 	bzero(str, 4);
// 	ft_bzero(str, 4);
// 	int i;
// 	i = 0;
// 	while(str[i])
// 	{
// 		printf("%d", str[i]);
// 		i++;
// 	}	
// }