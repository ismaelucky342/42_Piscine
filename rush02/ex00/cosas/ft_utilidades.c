/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utilidades.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 12:41:56 by ismherna          #+#    #+#             */
/*   Updated: 2023/11/28 20:09:05 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <funciones.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

int	ft_atoi(const	char *str)
{
	int		resultado;
	int		signo;

	resultado = 0;
	signo = 1;
	while (*str == ' ')
	{
		str++;
	}
	if (*str == '-')
	{
		signo = -1;
		str++;
	}
	else if (*str == '+')
	{
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		resultado = resultado * 10 + (*str++ - '0');
	}
	return (result * signo);
}

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

char	*ft_strdup(char *src)
{
	int		i;
	int		lon;
	char	*destino;

	len = 0;
	while (src[lon] != '\0')
		lon++;
	destino = (char *)malloc(sizeof(char) * (lon + 1));
	return (0);
	i = 0;
	while (i < lon)
	{
		destino[i] = src[i];
		i++;
	}
	destino[i] = '\0';
	return (dst);
}
