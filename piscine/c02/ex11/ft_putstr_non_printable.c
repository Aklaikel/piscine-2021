/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklaikel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 09:57:47 by aklaikel          #+#    #+#             */
/*   Updated: 2021/08/14 12:29:53 by aklaikel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define HEX "0123456789abcdef"

void	ft_putchar(char	a)
{
	write(1, &a, 1);
}

void	ft_putstr_non_printable(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 127)
		{
			ft_putchar(str[i]);
		}
		else
		{
			ft_putchar('\\');
			ft_putchar(HEX[(unsigned char) str[i] / 16]);
			ft_putchar(HEX[(unsigned char) str[i] % 16]);
		}
		i++;
	}
}
