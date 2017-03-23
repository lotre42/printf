/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahantar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/14 16:43:44 by kahantar          #+#    #+#             */
/*   Updated: 2017/03/14 12:54:53 by kahantar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	int n;

	n = 0;
	if (!s1 || !s2)
		return (-1);
	while (s1[n] == s2[n] && s1[n] != '\0' && s2[n] != '\0')
	{
		n++;
	}
	return ((unsigned char)s1[n] - (unsigned char)s2[n]);
}
