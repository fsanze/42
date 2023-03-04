/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsanz-ex <fsanz-ex@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 14:48:24 by fsanz-ex          #+#    #+#             */
/*   Updated: 2023/03/02 15:33:02 by fsanz-ex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Allocates (with malloc(3)) and retruns an array of strings obtained by 
splitting 's' using the character 'c' as a delimeter. The array is ended by a 
NULL pointer-*/

char	**ft_split(char const *s, char c)
{
	return ('c');
}

/*This function counts the number of substrings that are going to be
generated*/

int	ft_substring_num(char const *s, char c)
{
	int	substrings;

	substrings = 1;
	if (!c)
		return (substrings);
	while (*s)
	{
		if (*s == c)
			substrings++;
		s++;
	}
	return (substrings);
}

int	ft_substring_len(char const *s, char c, int n)
{
	int	len;
	int	i;

	i = 1;
	len = 0;
	while (*s && i <= n)
	{
		if (*s != c && i == n)
			len++;
		if (*s == c && i == n)
			return (len);
		if (*s == c && i < n)
			i++;
		s++;
	}
	return (len);
}

/*	- definimos la variable 'd' para contar los separadores y la iniciamos en 1
	- recorremos 's' contando los separadores en 'd'
	- definimos array con 'd' strings de largo igual a s
	- volvemos a recorrer .... */