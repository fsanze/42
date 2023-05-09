/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsanz-ex <fsanz-ex@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 15:36:23 by fsanz-ex          #+#    #+#             */
/*   Updated: 2023/03/17 22:51:44 by fsanz-ex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*appends string src to the end of dst. It will append at most dstsize -
strlen(dst) - 1 characters. It will then NUL-terminate, unless dstsize is 0 or
the original dst string was longer than dstsize. If the src and dst strings 
overlap, the behavior is undefined. Returns the total length of the string they
tried to create (initial length of dst plus the length of src).*/

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	ls;
	size_t	ld;

	i = 0;
	ls = ft_strlen(src);
	ld = ft_strlen(dst);
	if (dstsize == 0)
		return (ls);
	if (dstsize > 0)
	{
		while (src[i] && i < dstsize - ld - 1)
		{
			dst[ld + i] = src[i];
			i++;
		}
		if (dstsize > ld)
			dst[ld + i] = '\0';
	}
	if (ld >= dstsize)
		ld = dstsize;
	return (ls + ld);
}
