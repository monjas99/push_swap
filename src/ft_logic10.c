/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_logic10.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonjas- <dmonjas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 11:32:10 by dmonjas-          #+#    #+#             */
/*   Updated: 2023/05/17 10:48:54 by dmonjas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

static int	ft_pos_min(t_list **a)
{
	int		count;
	int		i;
	t_list	*aux;
	int		x;

	count = 1;
	i = 0;
	x = (*a)->content;
	aux = (*a);
	while (aux)
	{
		if (aux->content < x)
		{
			i = count;
			x = aux->content;
		}
		count++;
		aux = aux->next;
	}
	return (i);
}

static void	ft_more(t_list **a, t_list **b, int i)
{
	while (i <= ft_lstsize(*a))
	{
		ft_rra(a);
		i++;
	}
	ft_pb(a, b);
}

static void	ft_less(t_list **a, t_list **b, int i)
{
	while (i > 1)
	{
		ft_ra(a);
		i--;
	}
	ft_pb(a, b);
}

void	ft_order10(t_list **a, t_list **b)
{
	int	i;

	i = 0;
	while (ft_lstsize(*a) > 3)
	{
		i = ft_pos_min(a);
		if (i > (ft_lstsize(*a) / 2))
			ft_more(a, b, i);
		else if (i <= (ft_lstsize(*a) / 2))
			ft_less(a, b, i);
	}
	if (ft_is_order(a) == 0)
		ft_order3(a);
	while (ft_lstsize(*b) != 0)
	{
		ft_pa(a, b);
	}
}
