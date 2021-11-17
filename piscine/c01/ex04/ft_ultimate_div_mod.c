/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklaikel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 09:02:30 by aklaikel          #+#    #+#             */
/*   Updated: 2021/08/10 13:54:35 by aklaikel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	takgivd;
	int	takgivm;

	takgivd = *a / *b;
	takgivm = *a % *b;
	*a = takgivd;
	*b = takgivm;
}
