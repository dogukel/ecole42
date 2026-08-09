/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkel <dkel@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 19:46:26 by dkel              #+#    #+#             */
/*   Updated: 2022/10/27 22:50:20 by dkel             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst)
		return ;
	new->next = *lst;
	*lst = new;
}
/*
int main()
{
	t_list *lst,*lst2;
	t_list *new;
	lst = ft_lstnew("dogu");
	lst2 = ft_lstnew("kel");
	new = ft_lstnew("can");
	lst->next = lst2;
	ft_lstadd_front(&lst, new);
	printf("%s", lst->content);
	printf("%s", new->content);
	printf("%s", lst2->content);
}*/
