/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklaikel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 16:21:26 by aklaikel          #+#    #+#             */
/*   Updated: 2021/08/21 08:22:41 by aklaikel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_recursive_factorial(int	nb)
{
	if (nb < 0)
	{
		return (0);
	}
	if (nb <= 1)
	{
		return (1);
	}
	else
	{
		nb *= ft_recursive_factorial(nb - 1);
		return (nb);
	}
}
