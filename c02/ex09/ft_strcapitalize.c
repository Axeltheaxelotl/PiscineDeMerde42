/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alanty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 13:44:34 by alanty            #+#    #+#             */
/*   Updated: 2024/01/17 14:57:25 by alanty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	i = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (!(str[i - 1] >= 'a' && str[i - 1] <= 'z'))
			{
				if (!(str[i - 1] >= '0' && str[i - 1] <= '9'))
				{
					if (!(str[i - 1] <= 'Z' && str[i - 1] >= 'A'))
					{
						str[i] -= 32;
					}
				}
			}
		}
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int	main()
{
	char	str1[] = "salut comment tu vas, 42mots quarante-deux; cinquante+et+un";
	char	str2[] = "bonsoir tout le monde 123";

	printf("Avant : %s\n", str1);
	ft_strcapitalize(str1);
	printf("Après : %s\n\n", str1);

	printf("Avant : %s\n", str2);
	ft_strcapitalize(str2);
	printf("Après : %s\n", str2);
}
*/
