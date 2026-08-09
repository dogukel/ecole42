/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkel <dkel@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 21:52:14 by dkel              #+#    #+#             */
/*   Updated: 2022/10/28 08:47:17 by dkel             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!del || !lst)
		return ;
	(*del)(lst->content);
	free(lst);
}
/*void	del(void *content)
{
	free(content);
}

int main()
{	
    t_list	*lst;
	lst = ft_lstnew(ft_strdup("dogu"));
	printf("%s\n", lst->content);
	ft_lstdelone(lst, del);
	printf("%s\n", lst->content);
}*/
