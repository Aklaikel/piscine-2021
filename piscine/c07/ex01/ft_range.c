/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklaikel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 18:07:17 by aklaikel          #+#    #+#             */
/*   Updated: 2021/08/24 12:35:30 by aklaikel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdlib.h>

int	*ft_range(int	min, int	max)
{
	int	*copy;
	int	len;
	int	i;

	len = max - min;
	copy = (int *) malloc(len * sizeof(int));
	if (min >= max)
	{
		return (0);
	}
	i = 0;
	while (min < max)
	{
		copy[i] = min;
		i++;
		min++;
	}
	return (copy);
}
