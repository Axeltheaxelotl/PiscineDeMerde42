/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alanty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 12:33:17 by alanty            #+#    #+#             */
/*   Updated: 2024/01/22 09:39:01 by alanty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	i;

	i = nb;
	if (power < 0)
	{
		return (0);
	}
	else if (power == 0)
	{
		return (1);
	}
	else if (power > 0)
	{
		return (nb * ft_recursive_power(nb, power -1));
	}
	return (nb);
}
/*
#include <stdio.h>

int	main()
{
	int	base = 2;
	int	exponent = 5;
	printf("%d^%d = %d\n", base, exponent, ft_recursive_power(base, exponent));
}
*/
