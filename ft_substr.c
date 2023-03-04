/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsanz-ex <fsanz-ex@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 16:09:06 by fsanz-ex          #+#    #+#             */
/*   Updated: 2023/02/19 15:57:05 by fsanz-ex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/*Allocates (with malloc (3)) and returns a substring from the string 's'. The
substring begins at index 'start' and is of maximum size 'len'. Returns the new
string or NULL if the allocation fails.*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*subs;
	unsigned int	i;
	size_t			j;

	i = 0;
	j = 0;
	if (start > (unsigned int) ft_strlen(s))
		return (ft_strdup(""));
	if (((unsigned int) ft_strlen(s) - start) < (unsigned int) len)
		len = (size_t) ft_strlen(s) - (size_t) start;
	subs = (char *) malloc(sizeof(char) * (len + 1));
	if (subs == NULL)
		return (NULL);
	while (s[i])
	{
		if (i >= start && j < len)
		{
			subs[j] = s[i];
			j++;
		}
		i++;
	}
	subs[j] = '\0';
	return (subs);
}
