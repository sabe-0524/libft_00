/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabe <sabe@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 11:22:48 by sabe              #+#    #+#             */
/*   Updated: 2024/04/16 18:41:32 by sabe             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
  char  *ans;
  unsigned int   i;

  i = 0;
  ans = malloc(sizeof(char) * (ft_strlen(s) + 1));
  if (!ans)
    return (NULL);
  while (s[i] != 0)
  {
    ans[i] = f(i, s[i]);
    i++;
  }
  ans[i] = 0;
  return (ans);
}