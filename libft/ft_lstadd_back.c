/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkel <dkel@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 19:45:11 by dkel              #+#    #+#             */
/*   Updated: 2022/10/28 00:43:09 by dkel             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (lst)
	{
		if (*lst)
		{
			last = ft_lstlast(*lst);
			last->next = new;
		}
		else
			*lst = new;
	}
}
/*int main()
{
	t_list *lst1, *lst2;
	t_list *new;
	lst1 = ft_lstnew("dogu");
	lst2 = ft_lstnew("can");
	new = ft_lstnew("kel");
	lst1->next= lst2;
	ft_lstadd_back(&lst1, new);
	printf("%s", new->content);
	printf("%s", lst2->content);
	printf("%s", lst1->content);
	printf("%d", ft_lstsize(lst1));
}*/