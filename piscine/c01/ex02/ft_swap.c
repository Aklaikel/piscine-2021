/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklaikel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 08:22:14 by aklaikel          #+#    #+#             */
/*   Updated: 2021/08/10 13:53:08 by aklaikel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_swap(int	*a, int	*b)
{
	int	takgiv;

	takgiv = *a;
	*a = *b;
	*b = takgiv;
}
