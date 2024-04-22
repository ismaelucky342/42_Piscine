/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cuadrado.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 09:34:46 by ismherna          #+#    #+#             */
/*   Updated: 2023/11/29 12:23:23 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <funcionesGenerales.h>

int x_tamaño(char **matrix)
{
    int tamaño;

    tamaño = 0;
    while (matrix[tamaño] != NULL)
        tamaño++;
    return (tamaño);
}

int y_tamaño(char *row)
{
    int tamaño;

    tamaño = 0;
    while (row[tamaño] != '\0')
        tamaño++;
    return (tamaño);
}

int	square_size(t_square square)
{
	return (square.x_end - square.x_start + 1);
}

int	check_square(t_map map, t_square square)
{
	int		x;
	int		y;

	x = square.x_start;
	while (x <= square.x_end)
	{
		y = square.y_start;
		while (y <= square.y_end)
		{
			if (x >= x_size(map.matrix) || y >= y_size(map.matrix[x])
				|| map.matrix[x][y] == map.obs)
				return (0);
			y++;
		}
		x++;
	}
	return (1);
}

t_map	fill_square(t_map map, t_square square)
{
	int		x;
	int		y;

	x = square.x_start;
	while (x <= square.x_end)
	{
		y = square.y_start;
		while (y <= square.y_end)
		{
			map.matrix[x][y] = map.full;
			y++;
		}
		x++;
	}
	return (map);
}

t_square	find_square(t_map map, t_square square, int x_start, int y_start)
{
	t_square	newsquare;

	newsquare.x_start = x_start;
	newsquare.y_start = y_start;
	newsquare.x_end = x_start + square_size(square);
	newsquare.y_end = y_start + square_size(square);
	if (!check_square(map, newsquare))
	{
		newsquare.x_start = -1;
		return (newsquare);
	}
	while (check_square(map, newsquare))
	{
		newsquare.x_end++;
		newsquare.y_end++;
	}
	newsquare.x_end--;
	newsquare.y_end--;
	return (newsquare);
}
