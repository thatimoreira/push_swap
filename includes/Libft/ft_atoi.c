/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsoares- <tsoares-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 16:57:11 by tsoares-          #+#    #+#             */
/*   Updated: 2023/11/25 19:18:41 by tsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	validate_nbr(char *str)
{
	int	pos;

	pos = 0;
	while (str[pos])
	{
		if (str[pos] >= '0' && str[pos] <= '9')
			pos++;
		else
		{
			ft_printf("Error\n");
			return (-2);
		}
	}
	return (1);
}

int	ft_atoi(const char *nptr)
{
//args are all ints?
// args are bigger than INT_MAX or smaller than INT_MIN?
// in the above cases display "Error"
	int		i;
	int		convnum;
	int		sign;

	i = 0;
	convnum = 0;
	sign = 1;
	while ((nptr[i] >= '\t' && nptr[i] <= '\r') || nptr[i] == ' ')
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	if (validate_nbr((char *)(nptr + i)))
	{
		while (nptr[i] >= '0' && nptr[i] <= '9')
		{
			convnum = convnum * 10 + (nptr[i] - 48);
			i++;
		}
		return (convnum * sign);
	}
	else
		return (-2);
}

int	main(void)
{
	char	*str;
	int		convertstr;

	str = "-27";
	convertstr = ft_atoi(str);
	ft_printf("%d\n", convertstr);
	return (0);
}
