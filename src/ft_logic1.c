/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_logic1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <david@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 08:33:56 by dmonjas-          #+#    #+#             */
/*   Updated: 2023/05/16 08:59:49 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort(t_list **a, t_list **b)
{
	if (ft_is_order(a) == 0)
	{
		if (ft_lstsize(*a) == 2)
			ft_order2(a);
		else if (ft_lstsize(*a) == 3)
			ft_order3(a);
		else if (ft_lstsize(*a) > 3 && ft_lstsize(*a) <= 10)
			ft_order10(a, b);
		else if (ft_lstsize(*a) > 10 && ft_lstsize(*a) <= 100)
			ft_order100(a, b);
		else if (ft_lstsize(*a) > 100)
			ft_order500(a, b);
		else
			ft_print_error();
	}
	else if (ft_is_order(a) == 1)
		return ;
}

int	ft_is_order(t_list **a)
{
	t_list	*aux1;
	t_list	*aux2;

	aux1 = (*a)->next;
	while (aux1)
	{
		aux2 = *a;
		while (aux1 != aux2)
		{
			if (aux2->content > aux1->content)
				return (0);
			aux2 = aux2->next;
		}
		aux1 = aux1->next;
	}
	return (1);
}

void	ft_order2(t_list **a)
{
	if ((*a)->content > (*a)->next->content)
		ft_sa(a);
}

void	ft_order3(t_list **a)
{
	if ((*a)->content < (*a)->next->content)
	{
		if ((*a)->content < (*a)->next->next->content)
		{
			ft_sa(a);
			ft_ra(a);
		}
		else if ((*a)->content > (*a)->next->next->content)
			ft_rra(a);
	}
	else if ((*a)->content > (*a)->next->content)
	{
		if ((*a)->content < (*a)->next->next->content)
			ft_sa(a);
		else if ((*a)->content > (*a)->next->next->content)
		{
			if ((*a)->next->content > (*a)->next->next->content)
			{
				ft_sa(a);
				ft_rra(a);
			}
			else if ((*a)->next->content < (*a)->next->next->content)
				ft_ra(a);
		}
	}
}
