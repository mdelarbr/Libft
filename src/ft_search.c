/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_search.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mdelarbr <mdelarbr@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/11/12 16:48:05 by mdelarbr     #+#   ##    ##    #+#       */
/*   Updated: 2019/04/13 13:08:35 by mdelarbr    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../libft.h"

int		ft_search(char *s1, char s2)
{
	int i;

	i = 0;
	while (s1[i])
	{
		if (s1[i] == s2)
			return (1);
		i++;
	}
	return (0);
}
