/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsanz-ex <fsanz-ex@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 21:19:34 by fsanz-ex          #+#    #+#             */
/*   Updated: 2023/03/04 22:00:50 by fsanz-ex         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_int_len(int n)
{
	int	len;

	len = 1;
	if (n == 0)
		return (len);
	if (!n)
		return (0);
	if (n < 0)
	{
		n *= -1;
		len++;
	}
	while (n >= 10)
	{
		n /= 10;
		len++;
	}
	return (len);
}

int	ft_check_sign(int *n)
{
	if (*n < 0)
	{
		*n *= -1;
		return (-1);
	}
	return (1);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		sign;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < -2147483648 || n > 2147483647)
		return (NULL);
	len = ft_int_len(n);
	str = (char *)malloc(sizeof(char *) * (len + 1));
	if (str == NULL)
		return (NULL);
	str[len] = '\0';
	len--;
	sign = ft_check_sign(&n);
	while (len >= 0)
	{
		str[len] = (n % 10) + '0';
		n /= 10;
		len--;
	}
	if (sign == -1)
		str[0] = '-';
	return (str);
}
