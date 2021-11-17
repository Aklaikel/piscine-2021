/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklaikel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 09:14:14 by aklaikel          #+#    #+#             */
/*   Updated: 2021/08/06 09:58:25 by aklaikel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char	c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet(void)
{
	char	i;

	i = 97;
	while (i <= 122)
	{
		ft_putchar(i);
		i++;
	}
}
