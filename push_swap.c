/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsoares- <tsoares-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 19:20:07 by tsoares-          #+#    #+#             */
/*   Updated: 2024/03/11 19:20:11 by tsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
/*
static int  extract_numbers(char *argv_param) //each argv_param is a substr
{
    size_t  i;
    int     nbr;
    static int  count; // counts the amount of numbers

    i = 0;
    nbr = 0;
    count = 0;
    //ft_atoi();
    //validate_input();
    count++;
    return (nbr);
}*/

// stack_init()
// init stacks a and b
// store each nbr in stack a

int main(int argc, char **argv)
{
    int index;
    char    **str;

    index = 0;
    str = NULL;
    if (argc == 1 || (argc == 2 && !argv[1][0]))
    {
        ft_printf("Error");
        return (-1);
    }
    else if (argc == 2) // params passed between ""
    {
        str = ft_split(argv[1], ' ');
        while (str[index])
        {
            ft_printf("str[%d]: %s\n", index, str[index]);
            index++;
        }
            //validate_input(str[index++]);
        free_memory(str);
    }
    else // if (argc > 2) => params passed without ""
    {
        while (argv[++index])
            ft_printf("argv[%d]: %s\n", index, argv[index]);
            //extract_numbers(argv[index]);
    }
        // stack init aqui passando str de nbrs e total nbrs
    return (0);
}