/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsanz-ex <fsanz-ex@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 15:12:18 by fsanz-ex          #+#    #+#             */
/*   Updated: 2023/02/09 20:14:13 by fsanz-ex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Locates the first occurrence of c (converted to a char) in the string pointed
to by s. The terminating null character is considered to be part of the string;
therefore if c is `\0', the functions locate the terminating `\0'. Returns a
pointer to the located character, or NULL if the character does not appear in
the string.*/

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*st;

	i = 0;
	st = (char *) s;
	while (i <= ft_strlen(s))
	{
		if (*st == (char) c)
			return (st);
		st++;
		i++;
	}	
	return (NULL);
}
