/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohyamaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 12:54:51 by sohyamaz          #+#    #+#             */
/*   Updated: 2024/12/22 18:34:15 by sohyamaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include	<stdarg.h>
# include	<unistd.h>

# ifndef LOWHEX
#  define LOWHEX "0123456789abcdef"
#  define UPHEX "0123456789ABCDEF"
# endif

int		ft_printf(const char *format, ...);
void	init_variable(int *val1, int *val2, char *val3);
void	set_format(char typec, va_list args, int *len);
void	put_dec(int *len, long long args);
void	put_hex(int *len, unsigned long long args, char typec);
void	setchar(int *len, char args);
void	setstr(int *len, char *args);
void	setdec(int *len, long long args);
void	sethex(int *len, unsigned long long args, char typec);

#endif
