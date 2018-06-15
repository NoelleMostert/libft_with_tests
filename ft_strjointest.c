/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcattest.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmostert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 11:52:15 by nmostert          #+#    #+#             */
/*   Updated: 2018/06/15 11:28:19 by nmostert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int main () {

	char *str = "hello";
	char *str1 = "world";
	char *str3 = ft_strjoin(str, str1);
	
	if (str3)
	{
		printf("This is a test\n");
		printf("Final destination string : |%s|\n", str3);
	}
	else
		printf("failed\n");
   
   return(0);
}
