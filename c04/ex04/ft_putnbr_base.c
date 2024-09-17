/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alanty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 08:39:33 by alanty            #+#    #+#             */
/*   Updated: 2024/01/23 08:47:00 by alanty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	put_char(char c)
{
	write(1, &c, 1);
}

void	dec_to_base(int nbr, char *base, int n)
{
	if (nbr > n - 1)
		dec_to_base(nbr / n, base, n);
	put_char(base[nbr % n]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	char	*buffer;
	int		n;

	n = 0;
	while (*base != '\0' && *base != '+' && *base != '-')
	{
		buffer = base;
		while (*buffer++)
		{
			if (*buffer == *base)
				return ;
		}
		n++;
		base++;
	}
	if (n > 1 && *base != '+' && *base != '-')
	{
		if (nbr < 0)
		{
			nbr = -nbr;
			put_char('-');
		}
		dec_to_base(nbr, base - n, n);
	}
}
/*
#include <stdio.h>

int	main(void)
{
	printf("Base binaire (10101): ");
	ft_putnbr_base(21, "01");
	printf("\n");
	
	printf("Base octale (37): ");
	ft_putnbr_base(31, "poneyvif");
	printf("\n");
	
	printf("Base hexadécimale (1F): ");
	ft_putnbr_base(31, "0123456789ABCDEF");
	printf("\n");
	
	printf("Base personnalisée (2a): ");
	ft_putnbr_base(42, "abcde");
	printf("\n");
	
	printf("Base invalide (rien ne devrait être affiché) : ");
	ft_putnbr_base(42, "++-abc");
	printf("\n");
	
	return 0;
}
*/
