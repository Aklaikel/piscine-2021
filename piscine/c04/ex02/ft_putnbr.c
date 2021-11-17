/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklaikel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 08:56:11 by aklaikel          #+#    #+#             */
/*   Updated: 2021/08/16 09:16:01 by aklaikel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char	c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int	nb)
{
	long int	i;

	i = nb;
	if (i < 0 )
	{
		ft_putchar('-');
		i = -1 * i;
	}
	if (i <= 9)
		ft_putchar(i + 48);
	else
	{
		ft_putnbr(i / 10 );
		ft_putnbr(i % 10);
	}
}
