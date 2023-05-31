/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rules2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <david@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 13:41:03 by david             #+#    #+#             */
/*   Updated: 2023/04/18 11:38:13 by dmonjas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_ra(t_list **a)
{
	t_list	*aux;

	if (ft_lstsize(*a) > 1)
	{
		aux = *a;
		*a = (*a)->next;
		aux->next = NULL;
		ft_lstadd_back(a, aux);
		ft_printf("ra\n");
	}
}

void	ft_rb(t_list **b)
{
	t_list	*aux;

	if (ft_lstsize(*b) > 1)
	{
		aux = *b;
		*b = (*b)->next;
		aux->next = NULL;
		ft_lstadd_back(b, aux);
		ft_printf("rb\n");
	}
}

void	ft_rr(t_list **a, t_list **b)
{
	t_list	*aux;

	if (ft_lstsize(*a) > 1)
	{
		aux = *a;
		*a = (*a)->next;
		aux->next = NULL;
		ft_lstadd_back(a, aux);
		aux = *b;
		*b = (*b)->next;
		aux->next = NULL;
		ft_lstadd_back(b, aux);
		ft_printf("rr\n");
	}
}
