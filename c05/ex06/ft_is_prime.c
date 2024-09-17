/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alanty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 10:07:33 by alanty            #+#    #+#             */
/*   Updated: 2024/01/22 10:32:00 by alanty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	div;

	div = 2;
	if (nb <= 1)
		return (0);
	while (div <= nb / div)
	{
		if (nb % div == 0)
			return (0);
		div++;
	}
	return (1);
}
/*
#include <stdio.h>
int	main()
{
	int	nombre1 = 13;
	int	resultat = ft_is_prime(nombre1);

	if (resultat != 0)
		printf("%d est un nombre premier", nombre1);
	else
		printf("%d n'est pas un nombre premier", nombre1);
}
*/
