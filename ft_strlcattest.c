/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcattest.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmostert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 15:28:06 by nmostert          #+#    #+#             */
/*   Updated: 2018/06/14 15:01:25 by nmostert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int		main(void)
{
	char dst1[100] = "Hello";
	char dst2[100] = "Hello";
	const char src[] = "heyy";
	size_t dstsize = 15;

	printf("%zu\n", strlen(dst1));
	printf("%zu\n", ft_strlcat(dst1, src, dstsize));
	printf("%s\n", strncat(dst2, src, dstsize));
	printf("%lu\n", strlen(dst2));
	return (0);
}
