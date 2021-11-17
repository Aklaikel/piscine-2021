/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklaikel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 11:26:22 by aklaikel          #+#    #+#             */
/*   Updated: 2021/08/10 13:58:49 by aklaikel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_sort_int_tab(int	*tab, int	size)
{
	int	i;
	int	j;
	int	givtak;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				givtak = tab[i];
				tab[i] = tab[j];
				tab[j] = givtak;
			}
			j++;
		}
		i++;
	}
}
