/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alanty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 15:46:30 by alanty            #+#    #+#             */
/*   Updated: 2024/01/17 17:06:55 by alanty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>

int	main()
{
	char	ptr1[] = "bonjour";
	char	ptr2[] = "bonsoir";

	int	resultat = ft_strcmp(ptr1, ptr2);
	if (resultat == 0)
	{
		printf("%s est egale a %s\n", ptr1, ptr2);
	}
	else if (resultat < 0)
	{
		printf("%s est inferieur a %s\n", ptr1, ptr2);
	}
	else
	{
		printf("%s est superieur a %s\n", ptr1, ptr2);
	}
}
*/
