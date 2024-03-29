/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyanagim <hyanagim@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 22:43:35 by hyanagim          #+#    #+#             */
/*   Updated: 2022/12/11 08:46:37 by hyanagim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/list.h"

static void	make_ring(t_lst *lst)
{
	(*lst).prev = lstlast(lst);
	lstlast(lst)->next = lst;
}

t_stack	*make_list(t_vars *vars)
{
	int		i;
	t_stack	*stack;
	t_lst	*temp;

	stack = malloc(sizeof(t_stack));
	stack->a = lstnew(-1);
	stack->b = lstnew(-1);
	if (stack == NULL || stack->a == NULL || stack->b == NULL)
		malloc_error();
	i = 0;
	while (i < vars->size)
	{
		temp = lstnew(vars->elements[i]);
		if (temp == NULL)
			malloc_error();
		lstadd_back(&(stack->a), temp);
		i++;
	}
	make_ring(stack->a);
	make_ring(stack->b);
	free(vars->elements);
	return (stack);
}
