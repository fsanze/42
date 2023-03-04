/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsanz-ex <fsanz-ex@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 19:13:37 by fsanz-ex          #+#    #+#             */
/*   Updated: 2023/02/09 20:11:55 by fsanz-ex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*writes len bytes of value c (converted to an unsigned char) to the string b.
Returns its first argument.*/

void	*ft_memset(void *b, int c, size_t len)
{
	int		i;
	char	*str;

	i = 0;
	str = b;
	while (len > 0)
	{
		str[i] = (unsigned char) c;
		i++;
		len--;
	}
	return (b);
}
