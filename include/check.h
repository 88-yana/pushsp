/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyanagim <hyanagim@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 21:20:42 by hyanagim          #+#    #+#             */
/*   Updated: 2022/10/13 21:53:31 by hyanagim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECK_H
# define CHECK_H

# include <stdbool.h>
# include <stddef.h>
# include <limits.h>
# include "../libft/libft.h"
# include "../libft/ft_printf/ft_printf.h"
# include "struct.h"

void	print_error(char *message);
void	check_arg(int argc, char **argv);
void	check_duplicate(t_vars *vars);
void	check_sorted(t_vars *vars);
#endif