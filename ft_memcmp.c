/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsanz-ex <fsanz-ex@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 19:39:00 by fsanz-ex          #+#    #+#             */
/*   Updated: 2023/02/14 15:49:46 by fsanz-ex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* compares byte string s1 against byte string s2. Both strings are assumed to
be n bytes long. Returns zero if the two strings are identical, otherwise
returns the difference between the first two differing bytes*/

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*b1;
	unsigned char	*b2;

	b1 = (unsigned char *) s1;
	b2 = (unsigned char *) s2;
	i = 0;
	if (n == 0)
		return (0);
	while (b1[i] == b2[i] && i < n - 1)
		i++;
	return ((int) b1[i] - (int) b2[i]);
}
