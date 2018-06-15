/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcattest.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmostert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 11:52:15 by nmostert          #+#    #+#             */
/*   Updated: 2018/06/15 12:19:31 by nmostert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int main ()
{
	int i = 0;
	char *str = "hello world this is me";
	char delim = ' ';
	char **str3 = ft_strsplit(str, delim);
	while (i < 5)
	{
   		printf("%s\n", *str3++);
   		i++;
	}

	return(0);
}
