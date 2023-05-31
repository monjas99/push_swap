/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rules3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <david@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 13:41:06 by david             #+#    #+#             */
/*   Updated: 2023/05/11 11:43:48 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rra(t_list **a)
{
	t_list	*aux1;
	t_list	*aux2;

	if (ft_lstsize(*a) > 1)
	{
		aux1 = ft_lstlast(*a);
		aux2 = *a;
		while (aux2->next && aux2->next->next)
			aux2 = aux2->next;
		aux2->next = NULL;
		ft_lstadd_front(a, aux1);
		ft_printf("rra\n");
	}
}

void	ft_rrb(t_list **b)
{
	t_list	*aux1;
	t_list	*aux2;

	if (ft_lstsize(*b) > 1)
	{
		aux1 = ft_lstlast(*b);
		aux2 = *b;
		while (aux2->next->next)
			aux2 = aux2->next;
		aux2->next = NULL;
		ft_lstadd_front(b, aux1);
		ft_printf("rrb\n");
	}
}

void	ft_rrr(t_list **a, t_list **b)
{
	t_list	*aux1;
	t_list	*aux2;

	if (ft_lstsize(*a) > 1 && ft_lstsize(*b) > 1)
	{
		aux1 = ft_lstlast(*a);
		aux2 = *a;
		while (aux2->next->next)
			aux2 = aux2->next;
		aux2->next = NULL;
		ft_lstadd_front(a, aux1);
		aux1 = ft_lstlast(*b);
		aux2 = *b;
		while (aux2->next->next)
			aux2 = aux2->next;
		aux2->next = NULL;
		ft_lstadd_front(b, aux1);
		ft_printf("rrr\n");
	}
}	
