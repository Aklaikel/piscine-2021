/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklaikel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 10:46:14 by aklaikel          #+#    #+#             */
/*   Updated: 2021/08/10 13:57:43 by aklaikel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	givtak;

	i = 0;
	while (i < size - 1 )
	{
		givtak = tab[size - 1];
		tab[size - 1] = tab[i];
		tab[i] = givtak;
		i++;
		size--;
	}
}
