/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklaikel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 17:27:27 by aklaikel          #+#    #+#             */
/*   Updated: 2021/08/15 18:49:16 by aklaikel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char	*dest, char	*src, unsigned int	size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	i = 0;
	j = 0;
	k = 0;
	while (src[j] != '\0')
		j++;
	while (dest[k] != '\0')
		k++;
	if (size <= k)
		j = j + size;
	else
		j = j + k;
	while ((src[i] != '\0') && (k + 1 < size))
	{
		dest[k] = src[i];
		i++;
		k++;
	}
	dest[k] = '\0';
	return (j);
}
