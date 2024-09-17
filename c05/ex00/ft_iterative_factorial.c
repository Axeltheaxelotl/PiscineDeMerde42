/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alanty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 10:34:45 by alanty            #+#    #+#             */
/*   Updated: 2024/01/19 11:13:48 by alanty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_factorial(int nb)
{
	int	i;
	int	resultat;

	i = 1;
	resultat = 1;
	if (nb < 0)
	{
		return (0);
	}
	else if (nb == 0)
	{
		return (1);
	}
	while (i <= nb)
	{
		resultat = resultat * i;
		i++;
	}
	return (resultat);
}
/*
#include <stdio.h>

int	main()
{
	int	nbr = 5;
	printf("factorielle de %d = %d", nbr, ft_iterative_factorial(nbr));
}
*/
