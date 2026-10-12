/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsalinas <fsalinas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 17:42:24 by fsalinas          #+#    #+#             */
/*   Updated: 2026/10/10 17:59:41 by fsalinas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*filler(int x, int i, int n, char *dest)
{
	long	m;

	m = n;
	if (n < 0)
	{
		dest[0] = '-';
		m = m * -1;
	}
	while (x >= 1)
	{
		dest[i] = (m / x) + '0';
		m = m % x;
		i++;
		x = x / 10;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_itoa(int n)
{
	char	*dest;
	int		i;
	int		x;
	long	m;
	int		digit;

	i = (n < 0);
	x = 1;
	m = n;
	digit = 1;
	if (n < 0)
		m = m * -1;
	while ((m / x) >= 10)
	{
		x = x * 10;
		digit++;
	}
	dest = malloc((digit + i + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	filler(x, i, n, dest);
	return (dest);
}

// int main(void)
// {
// 	char *dest;
// 	dest = ft_itoa(3225456);
// 	printf("%s", dest);
// }