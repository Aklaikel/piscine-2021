/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklaikel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 09:24:19 by aklaikel          #+#    #+#             */
/*   Updated: 2021/08/21 11:18:03 by aklaikel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int	nb)
{
	int			i;
	long int	root;
	long int	nbr;

	nbr = nb;
	if (nb < 2)
		return (0);
	else if (nb == 2)
		return (1);
	i = 2;
	root = 1;
	while (root * root <= nbr)
	{
		if (nbr % i == 0)
		{
			return (0);
		}
		root++;
		i++;
	}
	return (1);
}
