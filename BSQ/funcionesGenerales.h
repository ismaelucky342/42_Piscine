/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcionesGenerales.h                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 09:44:11 by ismherna          #+#    #+#             */
/*   Updated: 2023/11/29 12:25:25 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCIONESGENERALES.H
# define FUNCIONESGENERALES.H
# include "estructuras.h"
# include <stdlib.h>
# include <unistd.h>

int			x_size(char	**matrix);
int			y_size(char	*row);
t_map		fill_square(t_map map, t_square square);
int			square_size(t_square square);
int			check_square(t_map map, t_square square);
t_square	find_square(t_map map, t_square square, int x_start, int y_start);
void		print_map(t_map map);
void		print_largest_square(t_map map, t_square square);
t_map		ft_solver(t_map map);
char		*ft_strcpy(char *dest, char *src);
int			ft_strlen(char *str);
char		**create_map_matrix(char *rows[]);
t_map		initialize_map(void);

#endif
