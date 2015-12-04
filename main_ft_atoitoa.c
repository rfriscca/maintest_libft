/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_atoitoa.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfriscca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 16:46:13 by rfriscca          #+#    #+#             */
/*   Updated: 2015/12/04 14:55:03 by rfriscca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../libft/libft.h"

int		main(int argc, char **argv)
{
	int		n;
	char	*s;

	n = ft_atoi(argv[1]);
	printf("ft_atoi : %d\natoi    : %d\n\n", ft_atoi(argv[1]), atoi(argv[1]));
	printf("ft_itoa : %s\n", ft_itoa(n));
	return (argc);
}
