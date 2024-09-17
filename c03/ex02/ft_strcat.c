/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alanty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 10:37:29 by alanty            #+#    #+#             */
/*   Updated: 2024/01/18 11:05:12 by alanty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;

	i = 0;
	while (dest[i])
		i++;
	while (*src)
		dest[i++] = *src++;
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
int	main()
{
	char	tab1[] = "bonjour";
	char	tab2[] = "bonsoir";

	ft_strcat(tab1, tab2);

	printf("resultat : %s", tab1);
}
*/
