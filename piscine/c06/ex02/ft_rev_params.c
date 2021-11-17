/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklaikel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 12:40:53 by aklaikel          #+#    #+#             */
/*   Updated: 2021/08/21 16:45:36 by aklaikel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

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
	if (argc >= 2)
	{
		while (argv[argc - 1] && argc != 1)
		{
			ft_putstr(argv[argc - 1]);
			ft_putchar('\n');
			argc--;
		}
	}
}
