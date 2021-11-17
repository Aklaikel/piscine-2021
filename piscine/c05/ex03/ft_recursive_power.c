/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklaikel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 17:38:30 by aklaikel          #+#    #+#             */
/*   Updated: 2021/08/21 15:25:34 by aklaikel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int	nb, int	power)
{
	if (power >= 1)
		return (nb *= ft_recursive_power(nb, power - 1));
	if (power == 0)
		return (1);
	else
		return (0);
}
