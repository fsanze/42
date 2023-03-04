/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsanz-ex <fsanz-ex@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 20:17:23 by fsanz-ex          #+#    #+#             */
/*   Updated: 2023/02/14 15:25:15 by fsanz-ex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*lexicographically compare the null-terminated strings s1 and s2 up to n
characters, characters that appear after a '\0' are not compared. Returns
an integer greater than, equal to, or less than 0, according as the string s1
is greater than, equal to, or less than the string s2.*/

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] && s2[i] && (s1[i] == s2[i]) && i < n - 1)
		i++;
	return ((unsigned char) s1[i] - (unsigned char) s2[i]);
}
