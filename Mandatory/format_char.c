/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_char.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohyamaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 15:54:17 by sohyamaz          #+#    #+#             */
/*   Updated: 2024/12/22 15:55:21 by sohyamaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	setchar(int *len, char args)
{
	*len = *len + write(1, &args, 1);
	return ;
}

void	setstr(int *len, char *args)
{
	int	i;

	i = 0;
	if (args == NULL)
	{
		*len = *len + write(1, "(null)", 6);
		return ;
	}
	while (args[i] != '\0')
	{
		write(1, &args[i], 1);
		(*len)++;
		i++;
	}
	return ;
}
