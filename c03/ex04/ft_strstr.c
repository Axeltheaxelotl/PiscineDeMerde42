/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alanty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 11:34:33 by alanty            #+#    #+#             */
/*   Updated: 2024/01/18 12:41:37 by alanty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	if (!*to_find)
		return (str);
	while (*str)
	{
		if (*str == *to_find)
		{
			i = 1;
			while (to_find[i] && str[i] == to_find[i])
				i++;
			if (!to_find[i])
				return (str);
		}
		str++;
	}
	return (0);
}
/*
#include <stdio.h>

int	main()
{       
	char	tab1[] = "bonjour";
	char	tab2[] = "3bonjour";
	char	*result;

	result = ft_strstr(tab2, tab1);

	if (result != NULL)
	{
		printf("La sous-chaîne a été trouvée à l'indice %ld.\n", result - tab2);
	}
	else
	{
        	printf("La sous-chaîne n'a pas été trouvée.\n");
	}

	return 0;
}
*/
