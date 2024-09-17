/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alanty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 10:44:39 by alanty            #+#    #+#             */
/*   Updated: 2024/01/16 11:00:15 by alanty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*
#include <stdio.h>

int	main(void)
{
	int 	val1;
	int	val2;

	val1 = 12;
	val2 = 8;

	ft_ultimate_div_mod(&val1, &val2);
	printf("resultat division : %d\n", val1);
	printf("resultat modulo : %d", val2);
}
*/
