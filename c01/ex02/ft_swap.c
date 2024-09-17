/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alanty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 19:01:33 by alanty            #+#    #+#             */
/*   Updated: 2024/01/16 10:10:22 by alanty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	echange;

	echange = *a;
	*a = *b;
	*b = echange;
}
/*
#include <stdio.h>

int main (void)
{
	int	a;
	int	b;
	int	*ptra;
	int	*ptrb;

	a = 1;
	b = 2;

	ptra = &a;
	ptrb = &b;

	ft_swap(ptra, ptrb);
	printf("a : %d, b : %d\n", a, b);
}
*/
