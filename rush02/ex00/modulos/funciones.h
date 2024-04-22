/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funciones.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismherna <ismherna@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 12:20:44 by ismherna          #+#    #+#             */
/*   Updated: 2023/11/28 22:45:32 by ismherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCIONES_H 
# define FUNCIONES_H

typedef	struct	s_list
{
	int		nb;
	char	*val;
}	t_list;

int		ft_atoi(const char *str);
char	*ft_strdup(char *src);
void	ft_putstr(char *str);
char	*ft_cojer_numero(int desc);
char	*ft_cojer_valor(int desc, char *c);
t_list	*Proc_Almacenaje(char *archivo);

#endif
