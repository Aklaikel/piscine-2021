/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklaikel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 11:45:07 by aklaikel          #+#    #+#             */
/*   Updated: 2021/08/21 12:33:46 by aklaikel         ###   ########.fr       */
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

int	ft_find_next_prime(int	nb)
{
	if (nb < 0)
		return (2);
	while (1)
	{
		if (ft_is_prime(nb) == 1)
		{
			return (nb);
		}
		nb++;
	}
}
