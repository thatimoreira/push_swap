/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsoares- <tsoares-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 16:30:21 by tsoares-          #+#    #+#             */
/*   Updated: 2024/03/13 18:21:47 by tsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"
#include <stdio.h>
#include <stdlib.h>

// inserts a node at the end of the list
void	insert_node(t_stack *node, t_stack **list)
{
	t_stack	*temp_list;

	temp_list = *list;
	if (!*list)
		*list = node;
	else
	{
		while (temp_list->next)
			temp_list = temp_list->next;
		temp_list->next = node;
	}
	
}

// creates nodes
t_stack	*create_node(int value)
{
	t_stack	*s;

	s = (t_stack *)malloc(sizeof(t_stack));
	if (!s)
		return (NULL);
	s->num = value;
	s->next = NULL;
	return (s);
}

int	main(int argc, char **argv)
{
	int	i;
	t_stack	*new_node;
	t_stack *new_list;

	i = 1;
	new_list = new_node;
	while (argv[i])
	{
		new_node = create_node(atoi(argv[i]));
		if (!new_list)
			break ;
		insert_node(new_node, &new_list);
		i++;
	}
	new_node = new_list;
	while (new_node)
	{
		printf("Data: %d  |  ", new_node->num);
		printf("next: %p\n", new_node->next);
		new_node = new_node->next;
	}
	free(new_node);
	return (0);
}
