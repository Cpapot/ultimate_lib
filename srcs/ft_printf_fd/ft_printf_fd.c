/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 10:48:33 by cpapot            #+#    #+#             */
/*   Updated: 2023/02/17 18:25:16 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_fd.h"

int	ft_printf_fd(int fd, const char *format, ...)
{
	ssize_t	len;
	va_list	variadic;

	va_start(variadic, format);
	len = ft_callformat_fd(fd, format, variadic);
	va_end(variadic);
	return ((int)len);
}
