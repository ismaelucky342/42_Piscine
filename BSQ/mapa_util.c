/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mapa_util.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 12:11:07 by ismherna          #+#    #+#             */
/*   Updated: 2023/11/29 12:23:42 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcionesGenerales.h"

char	**create_map_matrix(char *rows[])
{
	int		num_rows;
	int		i;
	int		row_size;
	char	**matrix;

	num_rows = 0;
	while (rows[num_rows] != NULL)
		num_rows++;
	matrix = (char **)malloc((num_rows + 1) * sizeof(char *));
	i = 0;
	while (i < num_rows)
	{
		row_size = y_size(rows[i]);
		matrix[i] = (char *)malloc((row_size + 1) * sizeof(char));
		ft_strcpy(matrix[i], rows[i]);
		i++;
	}
	matrix[num_rows] = NULL;
	return (matrix);
}

t_map	initialize_map(void)
{
	t_map	map;

	map.obs = 'o';
	map.full = '.';
	return (map);
}

void	print_map(t_map map)
{
	int		i;
	char	*line;
	size_t	len;
	ssize_t	bytes_written;

	i = 0;
	while (map.matrix[i] != NULL)
	{
		line = map.matrix[i];
		len = ft_strlen(line);
		bytes_written = write(1, line, len);
		if (bytes_written == -1)
			break ;
		write(1, "\n", 1);
		i++;
	}
}
