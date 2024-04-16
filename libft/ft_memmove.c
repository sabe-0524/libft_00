/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabe <sabe@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 12:38:05 by sabe              #+#    #+#             */
/*   Updated: 2024/04/16 19:55:47 by sabe             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *buf1, const void *buf2, size_t n)
{
    if (n == 0 && (buf1 == NULL || buf2 == NULL))
        return (NULL);
    if (buf1 == 0 && buf2 == 0)
        return (NULL);
    unsigned char *ptr1;
    unsigned char *ptr2;

    ptr1 = (unsigned char *)buf1;
    ptr2 = (unsigned char *)buf2;
    if (ptr1 < ptr2)
    {
        while (n-- > 0)
            *ptr1++ = *ptr2++;
    }
    else
    {
        ptr1 += n - 1;
        ptr2 += n - 1;
        while (n-- > 0)
            *ptr1-- = *ptr2--;
    }
    return (buf1);
}
