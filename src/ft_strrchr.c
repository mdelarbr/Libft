/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strrchr.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mdelarbr <mdelarbr@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/03 19:41:15 by mdelarbr     #+#   ##    ##    #+#       */
/*   Updated: 2019/04/13 13:08:35 by mdelarbr    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../libft.h"

char		*ft_strrchr(const char *str, int c)
{
	int len;

	len = ft_strlen(str);
	while (len > 0)
	{
		if (str[len] == (const char)c)
			return ((char*)&str[len]);
		len--;
	}
	if (str[len] == (const char)c)
		return ((char*)&str[len]);
	return (NULL);
}
