/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsoares- <tsoares-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 16:57:11 by tsoares-          #+#    #+#             */
/*   Updated: 2024/03/13 18:52:38 by tsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"
#include <stdio.h>

int	ft_atoi(const char *nptr)
{
	int		i;
	int		convnum;
	int		sign;

	i = 0;
	convnum = 0;
	sign = 1;

	if (nptr[i] == '-')
	{
		sign = -1;
		i++;
	}
	if (!nptr[i])
	{
		printf("Error\n"); // substitute to a PRINTERROR
		return (-2);
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
		convnum = convnum * 10 + (nptr[i++] - 48);
	return (convnum * sign);
}

int	main(void)
{
	char	*str;
	int		convertstr;

	str = "2147483648";
	convertstr = ft_atoi(str);
	printf("%d\n", convertstr);
	return (0);
}
