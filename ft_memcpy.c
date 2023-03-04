/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsanz-ex <fsanz-ex@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 20:16:02 by fsanz-ex          #+#    #+#             */
/*   Updated: 2023/02/09 19:57:27 by fsanz-ex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*copies n bytes from memory area src to memory area dst. If dst and src overlap
behavior is undefined. Returns the original value of dst.*/

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	const unsigned char	*s;
	unsigned char		*d;

	s = src;
	d = dst;
	if (dst == NULL && src == NULL)
		return (dst);
	while (n--)
		d[n] = s[n];
	return (dst);
}
