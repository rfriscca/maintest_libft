/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_mem.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfriscca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 14:55:36 by rfriscca          #+#    #+#             */
/*   Updated: 2015/12/04 15:29:40 by rfriscca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../libft/libft.h"

int		main(int argc, char **argv)
{
	int		n;
	int		c;
	void	*b;
	void	*src;

	n = ft_atoi(argv[1]);
	c = argv[2][0];
	src = argv[3];
	b = malloc(sizeof(char) * n);
	printf("ft_memset : %s\nmemset    : %s\n\n", ft_memset(b, c, n), memset(b, c, n));
	ft_bzero(b, n);
	printf("ft_bzero : %s\n\n", b);
	printf("ft_memcpy : %s\nmemcpy    : %s\n\n", ft_memcpy(b, src, n), memcpy(b, src, n));
	printf("ft_memccpy : %s\nmemccpy    : %s\n\n", ft_memccpy(b, src, c, n), memccpy(b, src, c, n));
	printf("ft_memchr : %s\nmemchr    : %s\n\n", ft_memchr(b, c, n), memchr(b, c, n));
	printf("ft_memcmp : %d\nmemcmp    : %d\n", ft_memcmp(b, src, n), memcmp(b, src, n));
	return (argc);
}
