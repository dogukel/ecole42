/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkel <dkel@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 01:24:22 by dkel              #+#    #+#             */
/*   Updated: 2022/10/28 09:42:50 by dkel             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	if (!del || !lst || !*lst)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		(*del)((*lst)->content);
		free(*lst);
		*lst = tmp;
	}
}
/*void	del(void *content)
{
	free(content);
}
int main()
{
	t_list	*lst1, *lst2, *lst3;
	lst1 = ft_lstnew(ft_strdup("dogu"));
	lst2 = ft_lstnew(ft_strdup("can"));
	lst3 = ft_lstnew(ft_strdup("kel"));
	lst1->next = lst2;
	lst2->next = lst3;
	printf("%s\n", lst1->content);
	printf("%s\n", lst2->content);
	printf("%s\n", lst3->content);
	ft_lstclear(&lst1, del);
	printf("%s\n", lst1->content);
	printf("%s\n", lst2->content);
	printf("%s\n", lst3->content);
}*/
