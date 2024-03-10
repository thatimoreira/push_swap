/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsoares- <tsoares-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 17:22:16 by tsoares-          #+#    #+#             */
/*   Updated: 2024/01/06 23:14:47 by tsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_printf(const char *format, ...);
int		pf_putchar(int c);
int		pf_putstr(char *str);
size_t	pf_strlen(const char *str);
int		pf_putnbr(int num);
int		pf_putptr(void *ptr);
int		pf_puthexadec(unsigned int num, const char format);
int		pf_put_uint(unsigned int num);
size_t	pf_numlen(unsigned long long num);

#endif
