/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maintest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelmar <jdelmar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/25 15:20:25 by jdelmar           #+#    #+#             */
/*   Updated: 2015/02/25 16:00:22 by jdelmar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "ft_printf.h"
#define TEST(x, ...) write(1, "printf		result: ", 16) ; \
	printf(ft_strjoin(x, "\n"), __VA_ARGS__) ;  write(1, "ft_printf	result: ", 18);\
ft_printf(ft_strjoin(x, "\n"), __VA_ARGS__) ; printf("\n")

int		main(void)
{
	int	a;

	a = 42;
	TEST("Salut ! %s yolo","swag");
	TEST("%d", a);
	return (0);
}
