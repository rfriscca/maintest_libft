/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_is.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfriscca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 13:36:09 by rfriscca          #+#    #+#             */
/*   Updated: 2015/12/03 13:45:45 by rfriscca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "../libft/libft.h"

int		main(int argc, char **argv)
{
	unsigned char	c;

	c = '\0';
	printf("ft_isalpha : %d\nisalpha    : %d\n\n", ft_isalpha(c), isalpha(c));
	printf("ft_isdigit : %d\nisdigit    : %d\n\n", ft_isdigit(c), isdigit(c));
	printf("ft_isalnum : %d\nisalnum    : %d\n\n", ft_isalnum(c), isalnum(c));
	printf("ft_isprint : %d\nisprint    : %d\n\n", ft_isprint(c), isprint(c));
	printf("ft_isascii : %d\nisascii    : %d\n", ft_isascii(c), isascii(c));
	return (argc);
}
