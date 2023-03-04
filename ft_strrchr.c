/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsanz-ex <fsanz-ex@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 15:12:18 by fsanz-ex          #+#    #+#             */
/*   Updated: 2023/02/14 15:40:39 by fsanz-ex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Locates the last occurrence of c (converted to a char) in the string pointed
to by s. The terminating null character is considered to be part of the string;
therefore if c is '\0', the functions locate the terminating '\0'. Returns a
pointer to the located character, or NULL if the character does not appear.*/

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*st;

	i = ft_strlen(s);
	st = (char *) s;
	while (i >= 0)
	{
		if (st[i] == (char) c)
			return (&st[i]);
			i--;
	}	
	return (NULL);
}
