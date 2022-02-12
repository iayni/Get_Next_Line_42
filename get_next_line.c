/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iayni <iayni@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 01:27:49 by iayni             #+#    #+#             */
/*   Updated: 2021/12/19 17:22:11 by iayni            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"get_next_line.h"

char	*terminate_and_return(char *buff, int *total)
{
	char	*tmp;

	buff[*total] = '\0';
	tmp = ft_strdup(buff);
	free(buff);
	*total = 0;
	return (tmp);
}

char	*new_buf(int total, char *buff)
{
	char	*tmp;

	tmp = (char *)malloc((total + BUFFER_SIZE) * sizeof(char));
	if (!tmp)
		return (free(buff), NULL);
	ft_memcpy(tmp, buff, total);
	free(buff);
	return (tmp);
}

char	*free_buf(char *buff)
{
	if (buff)
		free(buff);
	return (NULL);
}

char	*get_next_line(int fd)
{
	char		*buff;
	static int	total;
	int			bytes;
	int			status;

	buff = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buff || BUFFER_SIZE <= 0)
		return (free_buf(buff));
	while ("allah")
	{
		bytes = 0;
		while (bytes++ < BUFFER_SIZE)
		{
			status = read(fd, &buff[total], 1);
			if (status == -1)
				return (free(buff), NULL);
			if (status == 0 && total == 0)
				return (free(buff), NULL);
			if ((status == 0) || buff[total++] == '\n')
				return (terminate_and_return(buff, &total));
		}
		buff = new_buf(total, buff);
		if (!buff)
			return (NULL);
	}
}
