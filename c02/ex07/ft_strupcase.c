/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alanty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 11:48:14 by alanty            #+#    #+#             */
/*   Updated: 2024/01/17 12:12:32 by alanty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 'a' + 'A';
		}
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
int	main()
{
	char	tab[] = "EgqzFsuGzRR";

	printf("original : %s\n", tab);
	ft_strupcase(tab);
	printf("Majuscule : %s", tab);
}
*/
