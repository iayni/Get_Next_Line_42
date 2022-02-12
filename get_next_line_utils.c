/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iayni <iayni@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 01:28:01 by iayni             #+#    #+#             */
/*   Updated: 2021/12/19 16:54:21 by iayni            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(const char *sq)
{
	size_t	j;
	char	*ptr;

	j = 0;
	ptr = malloc(ft_strlen(sq) * sizeof(char) + 1);
	if (!ptr)
		return (NULL);
	while (sq[j] != '\0')
	{
		ptr[j] = sq[j];
		j++;
	}
	ptr[j] = '\0';
	return (ptr);
}

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	char		*src_cst;
	char		*dst_cst;
	size_t		i;

	if (!dst && !src)
		return (NULL);
	src_cst = (char *)src;
	dst_cst = (char *)dst;
	i = 0;
	while (i < len)
	{
		dst_cst[i] = src_cst[i];
		i++;
	}
	return (dst_cst);
}
