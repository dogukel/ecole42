/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dogucankel <dogucankel@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 15:25:08 by dogucankel        #+#    #+#             */
/*   Updated: 2022/10/31 18:25:53 by dogucankel       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*first;
	t_list	*new;
	
	if (!f || !del)
		return (NULL);
    first = NULL;
	while (lst)
	{
		new = ft_lstnew((*f)(lst->content));
		if (!new)
		{
			ft_lstclear(&first, del);
		}
		ft_lstadd_back(&first, new);
		lst = lst->next;
	}
    return (first);
}
/*void	del(void *content)
{
	free(content);
}
void    *f(void *content)
{
	int i;
	char *str;

	i = 0;
	str = (char *)content;
	while (str[i])
	{
		ft_toupper(str[i]);
		i++;
	}
	return(content);
}
int main()
{
	t_list *list1;
	t_list *list2;
	t_list *list3;

	list1 = ft_lstnew(ft_strdup("dogu"));
	list2 = ft_lstnew(ft_strdup("can"));
	list3 = ft_lstnew(ft_strdup("kel"));
	list1->next = list2;
	list2->next = list3;
	
	ft_lstmap(list1, f, del);
	ft_lstmap(list2, f, del);

	printf("%s", list1->content);
	
}*/
