/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilidades.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 23:40:08 by ismherna          #+#    #+#             */
/*   Updated: 2023/11/29 12:23:59 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcionesGenerales.h"

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
