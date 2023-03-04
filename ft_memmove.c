/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsanz-ex <fsanz-ex@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 16:06:41 by fsanz-ex          #+#    #+#             */
/*   Updated: 2023/02/19 13:17:07 by fsanz-ex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*copies len bytes from string src to string dst.  The two strings may overlap.
Returns the original value of dst.*/

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const unsigned char	*s;
	unsigned char		*d;

	s = (const unsigned char *) src;
	d = (unsigned char *) dst;
	if (s < d)
		while (len--)
			d[len] = s[len];
	else
		ft_memcpy(d, s, len);
	return (dst);
}
