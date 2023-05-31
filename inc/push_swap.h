/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonjas- <dmonjas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 09:53:44 by dmonjas-          #+#    #+#             */
/*   Updated: 2023/05/17 12:42:39 by dmonjas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
//void	ft_imprimir(t_list **a);
void	ft_free_str(char **dst, int i);
void	ft_print_error(void);
void	ft_str_error(char **str);
void	ft_sign_error(char *str, int j);
void	ft_repeat_error(t_list **a);
void	ft_error_range(long i);
void	ft_sa(t_list **a);
void	ft_sb(t_list **b);
void	ft_ss(t_list **a, t_list **b);
void	ft_pa(t_list **a, t_list **b);
void	ft_pb(t_list **a, t_list **b);
void	ft_ra(t_list **a);
void	ft_rb(t_list **b);
void	ft_rr(t_list **a, t_list **b);
void	ft_rra(t_list **a);
void	ft_rrb(t_list **b);
void	ft_rrr(t_list **a, t_list**b);
void	ft_sort(t_list **a, t_list **b);
void	ft_order2(t_list **a);
void	ft_order3(t_list **a);
void	ft_order10(t_list **a, t_list **b);
void	ft_order100(t_list **a, t_list **b);
void	ft_more100(t_list **a, t_list **b, int i);
void	ft_less100(t_list **a, t_list **b, int i);
void	ft_firts_order(t_list **a, t_list **b, int i);
void	ft_order500(t_list **a, t_list **b);
int		ft_is_order(t_list **a);
int		ft_take_max(t_list **a);
int		ft_take_min(t_list **a);
int		ft_count_num(t_list **a, int i);
int		ft_atoi_long(const char *str);
int		ft_pos_max(t_list **b);
t_list	**ft_push_swap(char	**nbr, t_list **a, t_list **b);

#endif
