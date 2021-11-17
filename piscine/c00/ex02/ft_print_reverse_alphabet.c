/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklaikel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 10:02:58 by aklaikel          #+#    #+#             */
/*   Updated: 2021/08/06 10:24:22 by aklaikel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putcher(char	c)
{
	write(1, &c, 1);
}

void	ft_print_reverse_alphabet(void)
{
	char	i;

	i = 122;
	while (i >= 97)
	{
		ft_putcher(i);
		i--;
	}
}
