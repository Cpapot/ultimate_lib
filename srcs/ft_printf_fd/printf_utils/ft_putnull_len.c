/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnull_len.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 12:17:28 by cpapot            #+#    #+#             */
/*   Updated: 2023/02/17 18:28:24 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf_fd.h"

ssize_t	ft_putnull_len_fd(int fd)
{
	ssize_t	len;

	len = write(fd, "(null)", 6);
	return (len);
}
