/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsanz-ex <fsanz-ex@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 15:54:51 by fsanz-ex          #+#    #+#             */
/*   Updated: 2023/02/09 19:58:35 by fsanz-ex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*locates the first occurrence of c (converted to an unsigned char) in string s
returns a pointer to the byte located, or NULL if no such byte exists within n
bytes.*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;

	i = 0;
	str = (void *) s;
	while (i < n)
	{
		if (str[i] == (unsigned char) c)
			return (&str[i]);
		i++;
	}
	return (NULL);
}
