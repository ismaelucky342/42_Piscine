/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 11:33:27 by ismherna          #+#    #+#             */
/*   Updated: 2023/11/30 11:44:08 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int		rango;
	int		i;
	int		*buffer;
	int		*d;

	if (min >= max)
		return (0);
	rango = max - min;
	d = (buffer = malloc(rango * sizeof(int)));
	if (!d)
		return (0);
	i = 0;
	while (i < rango)
	{
		buffer[i] = min + i;
		i++;
	}
	return (buffer);
}

/*int		main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	i = 0;
	int	size;

	min = 5;
	max = 10;
	size = max - min;
	tab = ft_range(min, max);
	while(i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}

}*/
