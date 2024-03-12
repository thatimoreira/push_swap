/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsoares- <tsoares-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 21:25:46 by tsoares-          #+#    #+#             */
/*   Updated: 2024/03/11 21:25:48 by tsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    free_memory(char **program_params)
{
    size_t  i;

    i = 0;
    while (program_params[i])
        free(program_params[i++]);
    free(program_params);
}
/*
validate_input()
{
    // bigger than INT_MAX or smaller than INT_MIN
    // checks if args are duplicated
    // in the above cases display "Error"
    // if not, initialize the stacks a and b
}
*/
