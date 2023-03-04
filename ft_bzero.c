/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsanz-ex <fsanz-ex@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 15:32:25 by fsanz-ex          #+#    #+#             */
/*   Updated: 2023/02/09 20:07:44 by fsanz-ex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//writes n zeroed bytes to the string s. If n is zero, bzero() does nothing

void	ft_bzero(void *s, size_t n)
{
	int		i;
	char	*str;

	i = 0;
	str = s;
	while (n--)
	{
		str[i] = 0;
		i++;
	}
}
