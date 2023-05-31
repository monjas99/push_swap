/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonjas- <dmonjas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 11:57:03 by dmonjas-          #+#    #+#             */
/*   Updated: 2023/05/17 12:45:49 by dmonjas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_free(t_list **a, t_list **b)
{
	ft_lstclear(a);
	ft_lstclear(b);
	free(a);
	free(b);
}

//void	ft_imprimir(t_list **a)
//{
//	t_list	*aux;
//
//	aux = *a;
//	while (aux)
//	{
//		ft_printf("%i\n", aux->content);
//		aux = aux->next;
//	}
//}

t_list	**ft_push_swap(char	**nbr, t_list **a, t_list **b)
{
	char	**str;
	int		i;
	int		j;

	j = 1;
	i = 0;
	while (nbr[j])
	{
		str = ft_split(nbr[j], ' ');
		ft_str_error(str);
		i = 0;
		while (str[i])
		{	
			ft_lstadd_back(a, ft_lstnew(ft_atoi_long(str[i])));
			i++;
		}
		ft_free_str(str, i);
		j++;
	}
	ft_repeat_error(a);
	ft_sort(a, b);
	return (a);
}

int	main(int ac, char **av)
{
	t_list	**a;
	t_list	**b;

	a = malloc(sizeof(t_list *));
	*a = 0;
	if (!a)
		return (0);
	b = malloc(sizeof(t_list *));
	*b = 0;
	if (!b)
		return (0);
	if (ac > 1)
		ft_push_swap(av, a, b);
	ft_free(a, b);
	return (0);
}
