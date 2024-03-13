/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsoares- <tsoares-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 18:23:00 by tsoares-          #+#    #+#             */
/*   Updated: 2024/03/11 18:23:52 by tsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <limits.h>
# include "includes/Libft/libft.h"
# include "includes/Printf/libftprintf.h"

# define PRINT_ERROR ft_printf("Error\n");

typedef struct  stack
{
    int num;
    struct stack *next;
} stack;

void    free_memory(char **program_params);

#endif