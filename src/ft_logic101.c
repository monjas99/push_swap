/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_logic101.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonjas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 10:53:09 by dmonjas-          #+#    #+#             */
/*   Updated: 2023/04/18 11:26:34 by dmonjas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_take_min(t_list **a)
{
	t_list	*aux;
	int		x;

	x = (*a)->content;
	aux = (*a);
	while (aux)
	{
		if (aux->content < x)
			x = aux->content;
		aux = aux->next;
	}
	return (x);
}

int	ft_pos_max(t_list **b)
{
	t_list	*aux;
	int		i;
	int		x;
	int		count;

	count = 1;
	i = 0;
	x = (*b)->content;
	aux = (*b);
	while (aux)
	{
		if (aux->content >= x)
		{
			i = count;
			x = aux->content;
		}
		count++;
		aux = aux->next;
	}
	return (i);
}

void	ft_more100(t_list **a, t_list **b, int i)
{
	while (i <= ft_lstsize(*b))
	{
		ft_rrb(b);
		i++;
	}
	ft_pa(a, b);
}

void	ft_less100(t_list **a, t_list **b, int i)
{
	while (i > 1)
	{
		ft_rb(b);
		i--;
	}
	ft_pa(a, b);
}

void	ft_order500(t_list **a, t_list **b)
{
	int	i;
	int	size;
	int	x;

	x = ft_take_min(a);
	i = 0;
	if (x < 0)
		i = ((ft_take_max(a) + (x * -1)) / 8);
	else if (x >= 0)
		i = (ft_take_max(a) / 8);
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
