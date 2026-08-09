/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkel <dkel@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 19:41:53 by dkel              #+#    #+#             */
/*   Updated: 2022/10/27 22:30:26 by dkel             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
/*int	main()
{
	t_list	*lst;
	t_list	*lst2;
	t_list	*lst3;
	lst = ft_lstnew("Ali");
	lst2 = ft_lstnew("Ata");
	lst3 = ft_lstnew("Bindi");
	lst->next = lst2;
	lst->next->next = lst3;
	printf("%d\n", ft_lstsize(lst));
	printf("%s", lst3->content);
}*/