/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabe <sabe@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 12:20:19 by sabe              #+#    #+#             */
/*   Updated: 2024/04/18 15:44:09 by sabe             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_calloc(size_t count, size_t size)
{
    void    *buf;
    buf = malloc(size * count);
    if (!buf)
        return (NULL);
    ft_bzero(buf, size * count);
    return (buf);
}

// int main(void)
// {
//     char    *ans;

//     ans = (char *)ft_calloc(5, 5);
//     free(ans);
//     return (0);
// }

// __attribute__((destructor))
// static void destructor() {
//     system("leaks -q a.out");
// }