/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   estructuras.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 12:24:52 by ismherna          #+#    #+#             */
/*   Updated: 2023/11/29 12:24:58 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCT_H
# define STRUCT_H

typedef struct s_square
{
	int		x_start;
	int		y_start;
	int		x_end;
	int		y_end;
}	t_square;

typedef struct s_map
{
	char	**matrix;
	char	obs;
	char	full;
}	t_map;

#endif 

