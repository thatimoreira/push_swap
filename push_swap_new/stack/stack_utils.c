/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsoares- <tsoares-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 16:21:00 by tsoares-          #+#    #+#             */
/*   Updated: 2024/03/14 16:21:02 by tsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

void    free_split(char **program_params)
{
    size_t  i;

    i = 0;
    while (program_params[i])
        free(program_params[i++]);
    free(program_params);
}

char    *validate_input(char *str)
{
    size_t  pos;

    pos = 0;
    while (str[pos])
    {
        if (ft_isdigit(str[pos]))
            pos++;
        else
        {
            ft_printf("Error\n");
            break ;
        }
    }
    return (str);
}

char    **read_input(int n_params, char **params)
{
    int     index;
    char    **strs;

    index = 0;
    strs = NULL;
    if (n_params == 1 || (n_params == 2 && !params[1][0]))
    {
        ft_printf("Error\n");
        exit (1);
    }
    else if (n_params == 2)
    {
        strs = ft_split(params[1], ' ');
        while(strs[index])
        {
            validate_input(strs[index]);
            index++;
        }
        return (strs);
    }
    else
    {
        while(params[++index])
            validate_input(params[index]);
        return (params);
    }
}
//verify int max e int min na atoi