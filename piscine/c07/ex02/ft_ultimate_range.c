/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklaikel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 11:47:26 by aklaikel          #+#    #+#             */
/*   Updated: 2021/08/24 12:38:30 by aklaikel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

int	ft_ultimate_range(int	**range, int	min, int	max)
{
	int	len;
	int	i;
	int	*tab;

	len = max - min;
	if (min >= max)
	{
		return (0);
	}
	tab = (int *) malloc(len * sizeof(int));
	if (!tab)
		return (-1);
	i = 0;
	while (min < max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	*range = tab;
	return (len);
}
