/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iayni <iayni@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 18:07:38 by iayni             #+#    #+#             */
/*   Updated: 2021/12/19 17:24:50 by iayni            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include<stdlib.h>
# include<fcntl.h>
# include<unistd.h>

size_t		ft_strlen(const char *s);
char		*get_next_line(int fd);
char		*ft_strdup(const char *sq);
void		*ft_memcpy(void *dst, const void *src, size_t len);

#endif