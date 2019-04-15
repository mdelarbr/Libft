/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_putnbr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mdelarbr <mdelarbr@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/03 18:27:42 by mdelarbr     #+#   ##    ##    #+#       */
/*   Updated: 2019/04/13 13:08:35 by mdelarbr    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../libft.h"

void	ft_putnbr(int n)
{
	if (n < 0 && n >= -9)
	{
		ft_putchar('-');
		ft_putchar(-n + '0');
	}
	else if (n >= 0 && n < 10)
		ft_putchar(n + '0');
	else if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putchar((n % 10) + '0');
	}
	else if (n < -9)
	{
		ft_putchar('-');
		ft_putnbr(-(n / 10));
		ft_putchar(-(n % 10) + '0');
	}
}
