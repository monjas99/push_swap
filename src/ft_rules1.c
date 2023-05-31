/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rules1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <david@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 13:40:52 by david             #+#    #+#             */
/*   Updated: 2023/04/18 11:38:11 by dmonjas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sa(t_list **a)
{
	t_list	*aux;

	if (ft_lstsize(*a) > 1)
	{
		aux = *a;
		*a = (*a)->next;
		aux->next = (*a)->next;
		(*a)->next = aux;
		ft_printf("sa\n");
	}
}

void	ft_sb(t_list **b)
{
	t_list	*aux;

	if (ft_lstsize(*b) > 1)
	{
		aux = *b;
		*b = (*b)->next;
		aux->next = (*b)->next;
		(*b)->next = aux;
		ft_printf("sb\n");
	}
}

void	ft_ss(t_list **a, t_list **b)
{
	t_list	*aux;

	if (ft_lstsize(*a) > 1 && ft_lstsize(*b) > 1)
	{
		aux = *a;
		*a = (*a)->next;
		aux->next = (*a)->next;
		(*a)->next = aux;
		aux = *b;
		*b = (*b)->next;
		aux->next = (*b)->next;
		(*b)->next = aux;
		ft_printf("ss\n");
	}
}

void	ft_pa(t_list **a, t_list **b)
{
	t_list	*aux;

	if (ft_lstsize(*b) > 0)
	{
		aux = *b;
		*b = (*b)->next;
		ft_lstadd_front(a, aux);
		ft_printf("pa\n");
	}
}

void	ft_pb(t_list **a, t_list **b)
{
	t_list	*aux;

	if (ft_lstsize(*a) > 0)
	{
		aux = *a;
		*a = (*a)->next;
		ft_lstadd_front(b, aux);
		ft_printf("pb\n");
	}
}
