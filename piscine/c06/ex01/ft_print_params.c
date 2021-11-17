/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklaikel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 12:25:59 by aklaikel          #+#    #+#             */
/*   Updated: 2021/08/21 16:14:50 by aklaikel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_putchar(char	c)
{
	write(1, &c, 1);
}

void	ft_putstr(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	main(int	argc, char	**argv)
{
	int	i;

	i = 1;
	if (argc >= 2)
	{
		while (argv[i])
		{
			ft_putstr(argv[i]);
			ft_putchar('\n');
			i++;
		}
	}
}
