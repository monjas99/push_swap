/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonjas- <dmonjas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 08:33:20 by dmonjas-          #+#    #+#             */
/*   Updated: 2023/05/17 13:25:10 by dmonjas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_print_error(void)
{
	write(2, "Error\n", 6);
	exit(1);
}

void	ft_sign_error(char *str, int j)
{
	if (str[j + 1] == '+' || str[j + 1] == '-')
		ft_print_error();
	else if ((str[j] == '-' || str[j] == '+') && ft_strlen(str) == 1)
		ft_print_error();
	else if (j > 0)
	{
		if ((str[j] == '+' || str[j] == '-')
			&& (str[j - 1] <= '9' && str[j - 1] >= '0'))
			ft_print_error();
	}
}

void	ft_str_error(char **str)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(str[i]) == 0)
		ft_print_error();
	while (str[i])
	{
		j = 0;
		while (str[i][j])
		{
			if (str[i][j] == '+' || str[i][j] == '-')
			{
				ft_sign_error(str[i], j);
				j++;
			}
			else if (str[i][j] > '9' || str[i][j] < '0')
				ft_print_error();
			j++;
		}
		i++;
	}
}

void	ft_error_range(long i)
{
	if (i > INT_MAX || i < INT_MIN)
		ft_print_error();
}

void	ft_repeat_error(t_list **a)
{
	t_list	*aux;
	t_list	*aux2;

	aux = *a;
	aux2 = *a;
	while (aux)
	{
		aux2 = aux->next;
		while (aux2)
		{
			if (aux->content == aux2->content)
				ft_print_error();
			aux2 = aux2->next;
		}
		aux = aux->next;
	}
}
