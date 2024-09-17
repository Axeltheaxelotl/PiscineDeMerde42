/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alanty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 09:46:35 by alanty            #+#    #+#             */
/*   Updated: 2024/01/23 14:00:14 by alanty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long int	racine;

	racine = 1;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	while (racine * racine <= nb)
	{
		if (racine * racine == nb)
			return (racine);
		racine++;
	}
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	int nombre = 289;

	int result = ft_sqrt(nombre);

	if (result != 0)
		printf("La racine carrée de %d est : %d\n", nombre, result);
	else
		printf("%d n'a pas de racine carrée entière.\n", nombre);
				
	return 0;
}
*/
