/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alanty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 16:14:37 by alanty            #+#    #+#             */
/*   Updated: 2024/01/18 16:28:57 by alanty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
/*
#include <stdio.h>
int	main()
{
	char	tab1[] = "Hello, World!";
	int	longeur = ft_strlen(tab1);
	printf("Longeur de la chaine: %d\n", longeur);

	return 0;
}
*/
