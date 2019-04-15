/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstmap.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mdelarbr <mdelarbr@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/08 08:48:17 by mdelarbr     #+#   ##    ##    #+#       */
/*   Updated: 2019/04/13 13:08:35 by mdelarbr    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*nlist;
	t_list	*tmp;
	t_list	*blist;

	if (!lst)
		return (0);
	tmp = f(lst);
	if (!(nlist = ft_lstnew(tmp->content, tmp->content_size)))
		return (0);
	blist = nlist;
	lst = lst->next;
	while (lst)
	{
		tmp = f(lst);
		if (!(nlist->next = ft_lstnew(tmp->content, tmp->content_size)))
			return (0);
		nlist = nlist->next;
		lst = lst->next;
	}
	return (blist);
}
