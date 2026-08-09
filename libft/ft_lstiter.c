/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dogucankel <dogucankel@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 09:00:32 by dkel              #+#    #+#             */
/*   Updated: 2022/10/31 16:42:36 by dogucankel       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
}
/*void    f(void *content)
{
    char *nb;
    int i = 0;
    nb = (char *)content;
    while (nb[i])
    {
        nb[i] = nb[i] - 32;
        i++;
    }
}
int main()
{
    t_list *lst1;
    t_list *lst2;
    lst1 = ft_lstnew(ft_strdup("dogu"));
    lst2 = ft_lstnew(ft_strdup("can"));
    lst1->next = lst2;
    ft_lstiter(lst1, f);
    printf("%s\n", lst1->content);
    printf("%s", lst2->content);
}*/