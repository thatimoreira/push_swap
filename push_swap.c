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

//void int  validate_number()

/*static void  extract_numbers(char *argv_params, int start, int len)
{
    char *substr;

    substr = "";
    while (index >= 0)
    {
        while (argv_params)
            
        ft_printf("argv[1][%d]: %c\n", index, argv_params[index]);
        //na extract_numbers call validate_input(argv[1][i++]);
        index--;
    }
    validate_input(substr);
}*/

// that splits the argument and converts (use atoi) each nbr into integers

// void validate_input(char *nbr)
// checks if args are all int, bigger than INT_MAX or smaller than INT_MIN
// checks if args are duplicated
// in the above cases display "Error"
// if not, initialize the stacks a and b

// stack_init()
// init stacks a and b
// store each nbr in stack a
int main(int argc, char **argv)
{
    int index;
    char    **str;
    //int     count;

    index = 0;
    str = NULL;
    //count = 0;
    if (argc == 1 || (argc == 2 && !argv[1][0]))
    {
        ft_printf("Error");
        return (-1);
    }
    else if (argc == 2) // params passed between ""
    {
        str = ft_split(argv[1], ' ');
        index = 0;
        while (str[index])
        {
            ft_printf("str[%d]: %s\n", index, str[index]);
            free(str[index]);
            index++;
        }
        free(str);
            //validate_input(str[index--]);
        
    }
    else if (argc > 2) // params passed without ""
    {
        index = --argc;
        while (index >= 1)
        {
            ft_printf("argv[%d]: %s\n", index, argv[index]);
            //validate_input(argv[index--]);
            index--;
        }
    }
    return (0);
}
