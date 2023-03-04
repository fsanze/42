/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsanz-ex <fsanz-ex@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 17:17:16 by fsanz-ex          #+#    #+#             */
/*   Updated: 2023/02/09 20:01:08 by fsanz-ex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//tests for any character if it is a number. Returns 0 if false, 1 if true

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
