/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 13:40:14 by ismherna          #+#    #+#             */
/*   Updated: 2023/11/29 10:19:34 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funciones.h"
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

char    *ft_cojer_valor(int desc, char *c);
{
	int		i; 
	char	*str; 

	if(!(str = malloc(sideof(char)*128))) /*esta seccion hay que cambiarla para vincularla a ft_error*/
		exit(1); /*he puesto esto para salir del paso*/
	i = 0; 
	while (c[0] != '\n')
	{
		str[i] = c[0]; 
		read(desc, caracter, 1); 
		i++; 
	}
	return	(str); 
}

char	*ft_cojer_numero(int	desc)
{
	int		i;
	char	caracter[1];
	char	*str;

	if (!(str = malloc(sizeof(char) * 128)))/*igual que en el anterior hay que vincularlo con ft_erro*/
		exit(1);
	i = 0;
	read(fd, caracter, 1);
	while (c[0] == '\n')
		read(fd, caracter, 1);
	while (c[0] >= '0' && c[0] <= '9')
	{
		str[i] = caracter[0];
		read(fd, caracter, 1);
		i++;
	}
	return (str);
}

t_list  *Proc_Almacenaje(char *archivo)
{
	FILE			*file;
	t_list			*list;
	int				i;
	char			buffer[1024];

	file = fopen(file_name, "r");
	if (!file)
		return (NULL);
	list = (t_list *)malloc(sizeof(t_list) * 32);
	i = 0;
	while (fgets(buffer, 1024, file) && i < 32)
	{
		list[i].value = ft_atoi(buffer);
		list[i].nb = ft_getval(buffer);
		i++;
	}
	fclose(file);
	return (list);
}
