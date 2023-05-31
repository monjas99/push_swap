/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_logic100.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonjas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 07:39:45 by dmonjas-          #+#    #+#             */
/*   Updated: 2023/04/18 11:27:28 by dmonjas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//Valor del numero mas alto

int	ft_take_max(t_list **a)
{
	t_list	*aux;
	int		i;

	i = (*a)->content;
	aux = (*a)->next;
	while (aux)
	{
		if (i < aux->content)
			i = aux->content;
		aux = aux->next;
	}
	return (i);
}

//Contador de los numeros que estan por debajo del limitador

int	ft_count_num(t_list **a, int i)
{
	int		count;
	t_list	*aux;

	count = 0;
	aux = *a;
	while (aux)
	{
		if (aux->content <= i)
			count++;
		aux = aux->next;
	}
	return (count);
}

//Pasar los numeros a la pila B con la primera ordenacion

void	ft_firts_order(t_list **a, t_list **b, int i)
{
	int	count;

	count = ft_count_num(a, i);
	while (count > 0)
	{
		if ((*a)->content <= i)
		{
			ft_pb(a, b);
			count--;
		}
		else
			ft_ra(a);
	}
}

void	ft_order100(t_list **a, t_list **b)
{
	int	i;
	int	x;
	int	size;

	x = ft_take_min(a);
	i = 0;
	if (x < 0)
		i = ((ft_take_max(a) + (x * -1)) / 4);
	else if (x >= 0)
		i = (ft_take_max(a) / 4);
	size = i;
	while (ft_lstsize(*a) > 0)
	{
		ft_firts_order(a, b, x);
		x = x + size;
	}
	while (ft_lstsize(*b) > 0)
	{
		i = ft_pos_max(b);
		if (i >= (ft_lstsize(*b) / 2))
			ft_more100(a, b, i);
		else if (i < (ft_lstsize(*b) / 2))
			ft_less100(a, b, i);
	}
}
