/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alanty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 16:38:47 by alanty            #+#    #+#             */
/*   Updated: 2024/01/17 17:57:13 by alanty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (n == 0)
		return (0);
	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i] && i < n)
		i++;
	if (i == n)
		i--;
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>

int	main()
{
	char	tab1[] = "bonsoir";
	char	tab2[] = "bonjour";

	int	resultat = ft_strncmp(tab1, tab2, 7);

	if(resultat == 0)
	{
		printf("%s est egale a %s %u caracteres\n", tab1, tab2, 7);
	}
	else if (resultat < 0)
	{
		printf("%s est superieur a %s %u caracteres\n", tab1, tab2, 7);
	}
	else
	{
		printf("%s est inferieur a %s %u caracteres\n", tab1, tab2, 7);
	}
	
	return 0;
}
*/
