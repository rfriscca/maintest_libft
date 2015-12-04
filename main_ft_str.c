/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_str.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfriscca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 12:37:27 by rfriscca          #+#    #+#             */
/*   Updated: 2015/12/03 17:58:02 by rfriscca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../libft/libft.h"

int		main(int argc, char **argv)
{
	char	*s1;
	char	*s2;
	int		n;
	char	c;

	s1 = argv[1];
	s2 = argv[2];
	n = ft_atoi(argv[3]);
	c = argv[4][0];
	printf("ft_strlen : %lu\nstrlen    : %lu\n\n", ft_strlen(s1), strlen(s1));
	printf("ft_strdup : %s\nstrdup    : %s\n\n", ft_strdup(s1), strdup(s1));
	printf("ft_strcpy : %s\nstrcpy    : %s\n\n", ft_strcpy(ft_strdup(s1), ft_strdup(s2))
			, strcpy(strdup(s1), strdup(s2)));
	printf("ft_strncpy : %s\nstrncpy    : %s\n\n", ft_strncpy(ft_strdup(s1), ft_strdup(s2), n)
			, strncpy(strdup(s1), strdup(s2), n));
	printf("ft_strcat : %s\nstrcat    : %s\n\n", ft_strcat(ft_strdup(s1), ft_strdup(s2))
			, strcat(strdup(s1), strdup(s2)));
	printf("ft_strncat : %s\nstrncat    : %s\n\n", ft_strncat(ft_strdup(s1), ft_strdup(s2), n)
			, strncat(strdup(s1), strdup(s2), n));
	printf("ft_strlcat : %lu\nstrlcat    : %lu\n\n", ft_strlcat(ft_strdup(s1), ft_strdup(s2), n)
			, strlcat(strdup(s1), strdup(s2), n));
	printf("ft_strchr : %s\nstrchr     : %s\n\n", ft_strchr(ft_strdup(s1), c), strchr(strdup(s1), c));
	printf("ft_strrchr : %s\nstrrchr    : %s\n\n", ft_strrchr(ft_strdup(s1), c), strrchr(strdup(s1), c));
	printf("ft_strstr : %s\nstrstr    : %s\n\n", ft_strstr(ft_strdup(s1), ft_strdup(s2))
			, strstr(strdup(s1), strdup(s2)));
	printf("ft_strnstr : %s\nstrnstr    : %s\n\n", ft_strnstr(ft_strdup(s1), ft_strdup(s2), n)
			, strnstr(strdup(s1), strdup(s2), n));
	printf("ft_strcmp : %d\nstrcmp    : %d\n\n", ft_strcmp(s1, s2), strcmp(s1, s2));
	printf("ft_strncmp : %d\nstrncmp    : %d\n", ft_strncmp(s1, s2, n), strncmp(s1, s2, n));
	return (argc);
}
