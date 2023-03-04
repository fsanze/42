/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsanz-ex <fsanz-ex@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 15:50:28 by fsanz-ex          #+#    #+#             */
/*   Updated: 2023/02/14 14:21:54 by fsanz-ex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/*allocates sufficient memory for a copy of the string s1, does the copy, and
returns a pointer to it. If insufficient memory is available, NULL is 
returned*/

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	size_t	len;

	len = (size_t) ft_strlen(s1) + 1;
	ptr = (char *)malloc(len);
	if (ptr == NULL)
		return (NULL);
	ft_strlcpy(ptr, s1, len);
	return (ptr);
}
