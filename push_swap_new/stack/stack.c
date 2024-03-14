/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsoares- <tsoares-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 16:17:28 by tsoares-          #+#    #+#             */
/*   Updated: 2024/03/14 16:17:30 by tsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

int main(int argc, char **argv)
{
    int i;
    t_stack *new_node;
    t_stack *new_list;
    char    **args;

    i = 0;
    (void)new_list;
    (void)new_node;
    //read_input(argc, argv);
    args = read_input(argc, argv);
    while (args[i])
    {
        ft_printf("args[%d]: %s\n", args[i]);
        i++;
    }
    return (0);
}

// check atoi again
// add all nbrs passed as params to the stack
// check duplicated nbrs before start the push_swap
// free_split