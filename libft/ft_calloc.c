/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabe <sabe@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 12:20:19 by sabe              #+#    #+#             */
/*   Updated: 2024/04/16 20:38:04 by sabe             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_calloc(size_t count, size_t size)
{
    void    *buf;
    size_t i;

    i = 0;
    buf = malloc(size * count);
    if (!buf)
        return (NULL);
    ft_memset(buf, 0, size * count);
    return (buf);
}