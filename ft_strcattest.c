/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcattest.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmostert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 11:52:15 by nmostert          #+#    #+#             */
/*   Updated: 2018/06/15 12:30:55 by nmostert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int main (int argc, char **argv)
{
	if (argc == 3)
		ft_putstr(ft_strcat(argv[1], argv[2]));
	else
		return (-1);
	return (0);
}
