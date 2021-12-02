/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_memchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chilee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 10:40:53 by chilee            #+#    #+#             */
/*   Updated: 2021/12/01 11:12:07 by chilee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	unsigned char	s1[50] = "hello paris, hello everyone";
	unsigned char	s2[50] = "hello paris, hello everyone";

	printf("%s\n", (unsigned char *)memchr(s1, 'o', 20));
	printf("%p\n", (unsigned char *)memchr(s1, 'o', 20));
	
	printf("%s\n", (unsigned char *)ft_memchr(s2, 'o', 20));
	printf("%p\n", (unsigned char *)ft_memchr(s2, 'o', 20));

	int tab[7] = {-49, 49, 1, -1, 0, -2, 2};
	printf("%s\n", (char *)memchr(tab, -1, 7));
	printf("%s\n", (char *)ft_memchr(tab, -1, 7));

	return (0);

}
