/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonjas- <dmonjas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 08:20:09 by dmonjas-          #+#    #+#             */
/*   Updated: 2023/05/17 12:50:44 by dmonjas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_atoi_long(const char *str)
{
	int		i;
	int		count;
	long	valor;

	valor = 0;
	count = 1;
	i = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		i++;
	if (str[i] == '+')
		i++;
	else if (str[i] == '-')
	{	
		count = count * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		valor = (valor * 10) + str[i] - 48;
		i++;
	}	
	valor *= count;
	ft_error_range(valor);
	return ((int)valor);
}

void	ft_free_str(char **dst, int i)
{
	while (i-- > 0)
		free (dst[i]);
	free(dst);
}
