/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklaikel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 19:08:18 by aklaikel          #+#    #+#             */
/*   Updated: 2021/08/19 09:26:58 by aklaikel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_putchar(char	c)
{
	write(1, &c, 1);
}

int	ft_is_valid(char	*base)
{
	int	i;
	int	j;

	i = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i] != '\0')
	{
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[j] == base[i])
				return (0);
			j++;
		}
		if (base[i] == '+' || base[i] == '-')
			return (0);
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int	nbr, char	*base)
{
	int			sb;
	long int	n;

	n = nbr;
	if (ft_is_valid(base))
	{
		sb = 0;
		while (base[sb] != '\0')
			sb++;
		if (n < 0)
		{
			ft_putchar('-');
			n *= -1;
		}
		if (n < sb)
			ft_putchar(base[n]);
		else
		{
			ft_putnbr_base(n / sb, base);
			ft_putnbr_base(n % sb, base);
		}
	}
}
