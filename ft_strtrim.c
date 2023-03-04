/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsanz-ex <fsanz-ex@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 14:01:07 by fsanz-ex          #+#    #+#             */
/*   Updated: 2023/02/23 19:31:35 by fsanz-ex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_starttrim(char const *s1, char const *set);
int		ft_endtrim(char const *s1, char const *set);

/*Allocates (with malloc(3)) and returns a copy of ‘s1’ with the characters
specified in ‘set’ removed from the beginning and the end of the string.
Returns the trimmed string or NULL if the allocation fails.*/

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*trimmed;

	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return (ft_strdup(s1));
	start = ft_starttrim(s1, set);
	end = ft_endtrim(s1, set);
	if (start >= end)
		return (ft_strdup(""));
	trimmed = (char *) malloc(sizeof(char) * (end - start + 1));
	if (trimmed == NULL)
		return (NULL);
	ft_strlcpy(trimmed, s1 + start, end - start + 1);
	return (trimmed);
}

//Defines where to start the trim

int	ft_starttrim(char const *s1, char const *set)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i] && set[j])
	{
		if (s1[i] == set[j])
		{
			i++;
			j = 0;
		}
		else
			j++;
	}
	return (i);
}

//Defines where to end the trim

int	ft_endtrim(char const *s1, char const *set)
{
	int	i;
	int	j;

	i = ft_strlen(s1) - 1;
	j = 0;
	while (s1[i] && set[j])
	{
		if (s1[i] == set[j])
		{
			i--;
			j = 0;
		}
		else
			j++;
	}
	return (i + 1);
}
