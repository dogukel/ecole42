/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkel <dkel@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 19:32:51 by dkel              #+#    #+#             */
/*   Updated: 2022/10/27 22:34:59 by dkel             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst)
	{
		if (lst->next == NULL)
			return (lst);
		lst = lst->next;
	}
	return (lst);
}
/*int main()
{
	t_list	*lst1, *lst2, *lst3;
	lst1 = ft_lstnew("dogu");
	lst2 = ft_lstnew("can");
	lst3 = ft_lstnew("kel");
	lst1->next = lst2;
	lst2->next = lst3;
	printf("%s", ft_lstlast(lst1)->content);
}*/