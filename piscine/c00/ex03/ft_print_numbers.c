/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklaikel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 10:25:42 by aklaikel          #+#    #+#             */
/*   Updated: 2021/08/06 10:46:18 by aklaikel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putcher(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	char	i;

	i = 48;
	while (i <= 57)
	{
		ft_putcher(i);
		i++;
	}
}
