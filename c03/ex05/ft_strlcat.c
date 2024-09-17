/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alanty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 13:50:55 by alanty            #+#    #+#             */
/*   Updated: 2024/01/18 15:46:31 by alanty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	res;

	i = 0;
	j = 0;
	res = 0;
	while (dest[i] != '\0')
		i++;
	while (src[res] != '\0')
		res++;
	if (size <= i)
		res += size;
	else
		res += i;
	while (src[j] != '\0' && (i + 1) < size)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (res);
}
/*
#include <stdio.h>

int	main()
{
	char	destination[20] = "une phrases";
	char	source[] = " a ecrire";
	unsigned int	size = 20;

	unsigned int	result = ft_strlcat(destination, source, size);

	printf("Résultat après concaténation : %s\n", destination);
	printf("Longueur totale après concaténation : %u\n", result);
	
	return 0;
}
*/
