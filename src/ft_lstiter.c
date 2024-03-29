/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yst-laur <yst-laur@student.42quebec.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 16:58:42 by yst-laur          #+#    #+#             */
/*   Updated: 2022/01/28 16:58:48 by yst-laur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/libft.h"

void	ft_lstiter(t_list *lst, void (f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
