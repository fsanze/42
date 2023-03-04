/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsanz-ex <fsanz-ex@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 14:50:43 by fsanz-ex          #+#    #+#             */
/*   Updated: 2023/02/14 15:43:27 by fsanz-ex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*converts an upper-case letter to the corresponding lower-case letter. Returns
the corresponding lower-case letter if there is one; otherwise, the argument
is returned unchanged.*/

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
	return (c);
}
