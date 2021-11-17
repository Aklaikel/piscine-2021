/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklaikel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 16:59:47 by aklaikel          #+#    #+#             */
/*   Updated: 2021/08/21 15:22:57 by aklaikel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int	nb, int	power)
{
	int	i;
	int	res;

	i = 0;
	res = 1;
	if (power < 0)
		return (0);
	if (power == 0)
	{
		return (1);
	}
	while (i < power)
	{
		res *= nb;
		i++;
	}
	return (res);
}
