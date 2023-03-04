/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsanz-ex <fsanz-ex@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 20:46:51 by fsanz-ex          #+#    #+#             */
/*   Updated: 2023/02/14 15:25:07 by fsanz-ex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*locates the first occurrence of the null-terminated string needle in the
string haystack, where not more than len characters are searched. Characters
after '\0' are not searched.*/

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	ln;

	ln = (size_t) ft_strlen(needle);
	if (*needle == '\0')
		return ((char *) haystack);
	while (*haystack && len-- >= ln)
	{
		if (ft_strncmp((char *) haystack, (char *) needle, ln) == 0)
			return ((char *) haystack);
		haystack++;
	}
	return (NULL);
}
