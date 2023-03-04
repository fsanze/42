/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsanz-ex <fsanz-ex@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 17:44:11 by fsanz-ex          #+#    #+#             */
/*   Updated: 2023/02/09 20:01:38 by fsanz-ex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//tests for any character if it is an ASCII Char. Returns 0 if false, 1 if true

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 0177)
		return (1);
	return (0);
}
