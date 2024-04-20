/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabe <sabe@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 12:39:52 by sabe              #+#    #+#             */
/*   Updated: 2024/04/20 16:00:54 by sabe             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	judge(char c, char c_set)
{
		if (c == c_set)
			return (1);
	return (0);
}

int	count_words(char const *str, char c)
{
	int	i;
	int	count;

	i = 1;
	count = 0;
	if (judge(str[0], c) == 0)
		count++;
	while (str[i] != '\0')
	{
		if (judge(str[i - 1], c) == 1 && judge(str[i], c) == 0)
			count++;
		i++;
	}
	return (count);
}

int	count_len(char const *str, char c, int i)
{
	int	count;

	count = 0;
	while (str[i] != '\0' && judge(str[i], c) == 0)
	{
		count++;
		i++;
	}
	return (count);
}

char	**ft_split(char const *str, char c)
{
	char	**array;
	int		i;
	int		j;
	int		index;

	i = 0;
	index = 0;
	array = malloc(sizeof(char *) * (count_words(str, c) + 1));
	if (!array)
  	return NULL;
	while (str[i] != '\0' && index < count_words(str, c))
	{
		while (judge(str[i], c) == 1 && str[i] != '\0')
			i++;
		array[index] = malloc(sizeof(char) * (count_len(str, c, i) + 1));
		if (!array[index])
    	return NULL;
		j = 0;
		while (judge(str[i], c) == 0 && str[i] != '\0')
			array[index][j++] = (char)str[i++];
		array[index][j] = '\0';
		index++;
	}
	array[index] = NULL;
	return (array);
}