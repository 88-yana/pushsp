/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyanagim <hyanagim@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 16:29:56 by hyanagim          #+#    #+#             */
/*   Updated: 2022/12/11 08:49:54 by hyanagim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/check.h"

void	print_error(char *message)
{
	ft_putendl_fd("Error", 2);
	ft_putendl_fd(message, 2);
}

void	malloc_error(void)
{
	print_error("malloc failed");
	exit (1);
}
