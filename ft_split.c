/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsanz-ex <fsanz-ex@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 16:05:41 by fsanz-ex          #+#    #+#             */
/*   Updated: 2023/03/02 19:58:29 by fsanz-ex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/*Allocates (with malloc(3)) and retruns an array of strings obtained by 
splitting 's' using the character 'c' as a delimeter. The array is ended by a 
NULL pointer-*/

int	ft_subs_counter(char const *s, char c)
{
	int	counter;
	int	i;

	counter = 0;
	i = 0;
	while (s[i])
	{
		if ((s[i] != c && s[i + 1] == c) || (s[i] != c && s[i + 1] == '\0'))
			counter++;
		i++;
	}
	return (counter);
}

unsigned int	ft_subs_start(char const *s, char c, int n)
{
	unsigned int	start;
	int				i;
	int				j;

	i = 0;
	j = 1;
	start = 0;
	while (s[i] == c)
		i++;
	while (s[i] && j <= n)
	{
		if (s[i] != c && j == n)
		{
			start = i;
			return (start);
		}
		if (s[i] == c && s[i - 1] != c && j < n)
			j++;
		i++;
	}
	return (start);
}

size_t	ft_subs_len(char const *s, char c, int n)
{
	int	len;
	int	i;
	int	j;

	i = 0;
	j = 1;
	len = 0;
	while (s[i] == c)
		i++;
	while (s[i] && j <= n)
	{
		if (s[i] != c && j == n)
			len++;
		if (s[i] == c && s[i - 1] != c && j == n)
			return (len);
		if (s[i] == c && s[i - 1] != c && j < n)
			j++;
		i++;
	}
	return ((size_t) len);
}

char	**ft_split(char const *s, char c)
{
	int		subs_num;
	char	**strings;
	int		i;
	int		j;

	if (!s)
		return (NULL);
	subs_num = ft_subs_counter(s, c);
	if (subs_num == 0)
		return (NULL);
	strings = malloc(sizeof(char *) * (subs_num + 1));
	if (strings == NULL)
		return (NULL);
	i = 0;
	j = 1;
	while (i < subs_num)
	{
		strings[i] = ft_substr(s, ft_subs_start(s, c, j), ft_subs_len(s, c, j));
		i++;
		j++;
	}
	strings[i] = NULL;
	return (strings);
}
