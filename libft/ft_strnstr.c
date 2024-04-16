/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabe <sabe@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 12:50:40 by sabe              #+#    #+#             */
/*   Updated: 2024/04/16 20:34:54 by sabe             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (str[i] == '\0' && to_find[i] == '\0')
		return ((char *)str);
	while (str[i] != '\0' && i + ft_strlen(to_find) <= n)
	{
		j = 0;
		while (str[i + j] == to_find[j] && str[i + j] != '\0')
			j++;
		if (to_find[j] == '\0')
			return ((char *)(str + i));
		i++;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char	*str = "baaaaaaa";
// 	char	*to_find = "aa";
// 	char	*ans = ft_strnstr(str, to_find, 2);
// 	char	*ans2 = strnstr(str, to_find, 2);
// 	printf("%s\n", ans);
// 	printf("%s\n", ans2);
// 	return (0);
// }