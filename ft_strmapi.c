/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsanz-ex <fsanz-ex@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 22:04:13 by fsanz-ex          #+#    #+#             */
/*   Updated: 2023/03/04 22:38:33 by fsanz-ex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int		i;
	char				*str;

	if (s == NULL || f == NULL)
		return (NULL);
	str = (char *) s;
	i = 0;
	while (str[i])
	{
		str[i] = (*f)(i, str[i]);
		i++;
	}
	return (ft_strdup((const char *) str));
}
