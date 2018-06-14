/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpytest.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmostert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 10:22:06 by nmostert          #+#    #+#             */
/*   Updated: 2018/06/05 10:26:43 by nmostert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"

char* msg = "This is the string: not copied";

int main( void )
{
    char buffer[80];
	char buffer1[80];

    memset(buffer, '\0', 80);
    memccpy(buffer, msg, ':', 80);
	ft_memccpy(buffer1, msg, ':', 80);

    printf("%s\n", buffer);
	printf("%s\n", buffer1);

    return EXIT_SUCCESS;
}
