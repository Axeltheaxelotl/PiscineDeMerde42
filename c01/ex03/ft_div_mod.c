/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alanty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 10:11:52 by alanty            #+#    #+#             */
/*   Updated: 2024/01/16 10:42:02 by alanty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdio.h>

int main(void)
{
	int val1;
	int val2;
	int result1;
	int result2;

	val1 = 12;
	val2 = 8;
	
	ft_div_mod(val1, val2, &result1, &result2);
	printf("resultat division : %d\n", result1);
	printf("resultat modulo : %d", result2);
}
*/
