/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsanz-ex <fsanz-ex@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 13:20:58 by fsanz-ex          #+#    #+#             */
/*   Updated: 2023/02/19 15:54:52 by fsanz-ex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Allocates (with malloc(3)) a new string, wich is the result of the 
concatenation of 's1' and 's2'. Retruns the new string or NULL if the
allocation fails.*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	size_t	l;
	int		i;

	i = 0;
	l = ft_strlen(s1) + ft_strlen(s2);
	s3 = (char *) malloc(sizeof(char) * (l + 1));
	if (s3 == NULL)
		return (NULL);
	while (i < ft_strlen(s1))
	{
		s3[i] = s1[i];
		i++;
	}
	while (i < (int) l)
	{
		s3[i] = s2[i - ft_strlen(s1)];
		i++;
	}
	s3[i] = '\0';
	return (s3);
}
