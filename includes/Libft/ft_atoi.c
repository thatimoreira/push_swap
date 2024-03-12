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

static int	check_intmin_intmax(int nbr)
{
	if (nbr <= INT_MIN || nbr >= INT_MAX)
	{
		ft_printf("Error\n"); // substitute to a PRINTERROR
		return (-2);
	}
	return (nbr);
}

static int	validate_nbr(char *str)
{
	int	pos;

	pos = 0;
	while (str[pos])
	{
		if (str[pos] >= '0' && str[pos] <= '9')
			pos++;
		else
		{
			ft_printf("Error\n"); // substitute to a PRINTERROR
			return (-2);
		}
	}
	return (1);
}

int	ft_atoi(const char *nptr)
{
// args are bigger than INT_MAX or smaller than INT_MIN?
// in the above cases display "Error"
	int		i;
	int		convnum;
	int		sign;

	i = 0;
	convnum = 0;
	sign = 1;
	//while ((nptr[i] >= '\t' && nptr[i] <= '\r') || nptr[i] == ' ')
	//	i++;
	if (nptr[i] == '-' || nptr[i] == '+')  // mantain the positive signal???
	{
		if (nptr[i++] == '-')
			sign = -1;
		if (!nptr[i])
		{
			ft_printf("Error\n"); // substitute to a PRINTERROR
			return (-2);
		}
	}
	if (validate_nbr((char *)(nptr + i)))
	{
		while (nptr[i] >= '0' && nptr[i] <= '9')
			convnum = convnum * 10 + (nptr[i++] - 48);
		convnum = check_intmin_intmax(convnum * sign);
		return (convnum);
	}
	else
		return (-2);
}

int	main(void)
{
	char	*str;
	int		convertstr;

	str = "2147483646";
	convertstr = ft_atoi(str);
	ft_printf("%d\n", convertstr);
	return (0);
}
