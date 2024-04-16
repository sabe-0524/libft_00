/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabe <sabe@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 12:43:09 by sabe              #+#    #+#             */
/*   Updated: 2024/04/16 18:40:44 by sabe             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *restrict dest, const char *restrict src, size_t size)
{
    int i;
    int j;

    j = ft_strlen(dest);
    i = ft_strlen(dest) - 1;
    if (j > size)
        return (size + ft_strlen(src));
    while (++i < size - 1 && *src != 0)
    {
        dest[i] = *src;
        src++;
    }
    dest[i] = 0;
    return (j + ft_strlen(src));
}

// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
//     char    dest[9] = "abcde";
//     char    *src = "fgh";
//     ft_strlcat(dest, src, 9);
//     printf("%s", dest);
//     return (0);
// }