/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabe <sabe@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 12:40:08 by sabe              #+#    #+#             */
/*   Updated: 2024/04/20 15:29:36 by sabe             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strchr(const char *str, int c)
{
    while (*str != 0)
    {
        if (*str == (char)c)
            return ((char *)str);
        str++;
    }
    if (c == 0)
        return ((char *)str);
    return (NULL);
}