/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyanagim <hyanagim@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 21:00:14 by hyanagim          #+#    #+#             */
/*   Updated: 2022/10/13 20:02:42 by hyanagim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCT_H
# define STRUCT_H

typedef struct s_vars
{
	int	*elements;
	int	*twin;
	int	size;
}	t_vars;


typedef struct s_lst
{
	int				num;
	struct s_lst	*prev;
	struct s_lst	*next;
}	t_lst;

#endif
