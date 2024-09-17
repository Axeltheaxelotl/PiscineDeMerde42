/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alanty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 14:47:58 by alanty            #+#    #+#             */
/*   Updated: 2024/01/30 13:44:21 by alanty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	has_char(char c, char *str)
{
	while (*str)
	{
		if (*str++ == c)
			return (1);
	}
	return (0);
}

int	strs_l(char *str, char *charset)
{
	int	part;
	int	count;

	part = 1;
	count = 0;
	while (*str)
	{
		if (!has_char(*str, charset) && part)
		{
			count++;
			part = 0;
		}
		else if (has_char(*str, charset))
			part = 1;
		str++;
	}
	return (count);
}

char	*ft_strdup(char *src, char *charset)
{
	char	*dest;
	char	*buffer;
	int		length;

	length = 0;
	buffer = src;
	while (*buffer && !has_char(*buffer++, charset))
		length++;
	dest = (char *)malloc(sizeof(*src) * length);
	buffer = dest;
	while (*src && length-- > 0)
		*buffer++ = *src++;
	*buffer = '\0';
	return (dest);
}

char	**ft_split(char *str, char *charset)
{
	char	**strs;
	char	**tmp;
	int		part;

	strs = (char **)malloc(strs_l(str, charset) * sizeof(*strs) + 1);
	tmp = strs;
	part = 1;
	while (*str)
	{
		if (!has_char(*str, charset) && part)
		{
			part = 0;
			*tmp = ft_strdup(str, charset);
			tmp++;
		}
		else if (has_char(*str, charset))
			part = 1;
		str++;
	}
	*tmp = 0;
	return (strs);
}
/*
#include <stdio.h>

int	main(void)
{
	char	input[] = "This is a sample string";
	char	charset[] = " ";
	char	**result = ft_split(input, charset);
	
	if (!result)
	{
		printf("Memory allocation failed.\n");
		return 1;
	}
	for (int i = 0; result[i] != NULL; i++)
	{
		printf("Word %d: %s\n", i + 1, result[i]);
		free(result[i]);
	}
	free(result);
	
	return 0;
}
*/
