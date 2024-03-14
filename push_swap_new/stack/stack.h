/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsoares- <tsoares-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 16:11:56 by tsoares-          #+#    #+#             */
/*   Updated: 2024/03/14 16:11:58 by tsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_H
# define STACK_H

#include <stdlib.h>
#include "../includes/Libft/libft.h"
#include "../includes/Printf/libftprintf.h"

typedef struct s_stack
{
    int num;
    struct s_stack *next;
}   t_stack;

char    **read_input(int n_params, char **params);
char    *validate_input(char *str);
void    free_split(char **program_params);

#endif