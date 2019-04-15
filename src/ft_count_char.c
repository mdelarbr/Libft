/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_count_word.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mdelarbr <mdelarbr@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/06 11:41:37 by mdelarbr     #+#   ##    ##    #+#       */
/*   Updated: 2019/04/13 13:26:55 by mdelarbr    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int		ft_count_char(char const *str, char c)
{
	int i;
	int	cnt;

	i = 0;
	cnt = 0;
	if (!str[i])
		return (0);
	while (str[i])
	{
		if (str[i] && str[i] == c)
			cnt++;
		i++;
	}
	return (cnt);
}
