/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabe <sabe@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 12:49:57 by sabe              #+#    #+#             */
/*   Updated: 2024/04/18 15:14:49 by sabe             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	unsigned char	u1;
	unsigned char	u2;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		u1 = s1[i];
		u2 = s2[i];
		if (u1 != u2)
			return (u1 - u2);
		i++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	*s1 = NULL;
// 	char	*s2 = NULL;
// 	// printf("%d", ft_strncmp(s1,s2,0));
// 	printf("%d", strncmp(s1, s2, 0));
// 	return (0);
// }