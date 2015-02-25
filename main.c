/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vterzian <vterzian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/18 15:06:14 by vterzian          #+#    #+#             */
/*   Updated: 2015/02/25 15:17:40 by jdelmar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

void	printf_test(void)
{
	unsigned int h = 123456789;
	ft_putchar('\n');
	printf("%x\n", h);
	printf("%#x\n", h);
}

void	basic_test(void)
{
	char 	c = 'a';
	char	str[] = "Tagazok";
	int		i;
	int 	d;
	//unsigned int o;
	//unsigned int h;
	//unsigned int u;
	//char *p;

	i = 3;
	d = 2;
	//o = 123456789;
	//h = 123456789;
	//u = 123456789;
	//p = ft_strdup("Salut");

	ft_printf("\e[0;34m [|]=============================================[|]\e[0;m\n");
	ft_printf("\e[0;34m [|]-------------     FT_PRINTF     -------------[|]\e[0;m\n");
	ft_printf("\e[0;34m [|]-------------    BASIC TESTS    -------------[|]\e[0;m\n");
	ft_printf("\e[0;34m [|]=============================================[|]\e[0;m\n");	
	ft_putchar('\n');
	ft_putendl("\e[0;33m - CHAR -\e[0;m");
	if (ft_strcmp(ft_itoa(ft_printf("> Tagazok %c toi!\n", c)),
				ft_itoa(printf("> Tagazok %c toi!\n", c))) != 0)
		ft_putendl(">retour: \e[0;31m x \e[0;m");
	else 
		ft_putendl(">retour: \e[0;32m o \e[0;m");
	ft_putchar('\n');

	ft_putendl("\e[0;33m- STRING - \e[0;m");
	if (ft_strcmp(ft_itoa(ft_printf("> %s a toi!\n", str)),
				ft_itoa(printf("> %s a toi!\n", str))) != 0)
		ft_putendl(">retour: \e[0;31m x \e[0;m");
	else 
		ft_putendl(">retour: \e[0;32m o \e[0;m");
	ft_putchar('\n');

	ft_putendl("\e[0;33m- INT - \e[0;m");
	if (ft_strcmp(ft_itoa(ft_printf("> Tagazak a vous %d et vous %i \n", d, i)),
				ft_itoa(printf("> Tagazak a vous %d et vous %i \n", d, i))) != 0)
		ft_putendl(">retour: \e[0;31m x \e[0;m");
	else 
		ft_putendl(">retour: \e[0;32m o \e[0;m");
	ft_putchar('\n');

	/*ft_putendl("\e[0;33m- OCTAL - \e[0;m");
	if (ft_strcmp(ft_itoa(ft_printf("> %o\n", o)),
				ft_itoa(printf("> %o\n", o))) != 0)
		ft_putendl(">retour: \e[0;31m x \e[0;m");
	else 
		ft_putendl(">retour: \e[0;32m o \e[0;m");
	ft_putchar('\n');

	ft_putendl("\e[0;33m- HEXA - \e[0;m");
	if (ft_strcmp(ft_itoa(ft_printf("> %x\n", h)),
				ft_itoa(printf("> %x\n", h))) != 0)
		ft_putendl(">retour: \e[0;31m x \e[0;m");
	else 
		ft_putendl(">retour: \e[0;32m o \e[0;m");
	ft_putchar('\n');

	ft_putendl("\e[0;33m- HEXA MAJ - \e[0;m");
	if (ft_strcmp(ft_itoa(ft_printf("> %X\n", h)),
				ft_itoa(printf("> %X\n", h))) != 0)
		ft_putendl(">retour: \e[0;31m x \e[0;m");
	else 
		ft_putendl(">retour: \e[0;32m o \e[0;m");
	ft_putchar('\n');

	ft_putendl("\e[0;33m- UNSIGNED - \e[0;m");
	if (ft_strcmp(ft_itoa(ft_printf("> %u\n", u)),
				ft_itoa(printf("> %u\n", u))) != 0)
		ft_putendl(">retour: \e[0;31m x \e[0;m");
	else 
		ft_putendl(">retour: \e[0;32m o \e[0;m");
	ft_putchar('\n');

	ft_putendl("\e[0;33m- PTR - \e[0;m");
	if (ft_strcmp(ft_itoa(ft_printf("> %p\n", p)),
				ft_itoa(printf("> %p\n", p))) != 0)
		ft_putendl(">retour: \e[0;31m x \e[0;m");
	else 
		ft_putendl(">retour: \e[0;32m o \e[0;m");
	ft_putchar('\n');

	ft_putendl("\e[0;33m- WITH %% - \e[0;m");
	if (ft_strcmp(ft_itoa(ft_printf("> deux %% a la fois\n")),
				ft_itoa(printf("> deux %% a la fois\n"))) != 0)
		ft_putendl(">retour: \e[0;31m x \e[0;m");
	else 
		ft_putendl(">retour: \e[0;32m o \e[0;m");
	ft_putchar('\n');

	ft_putendl("\e[0;33m- EVERYTHING - \e[0;m");
	if (ft_strcmp(ft_itoa(ft_printf("> (%%c)%c | (%%s)%s | (%%d)%d | (%%i)%i | (%%o)%o | (%%x)%x | (%%X)%X | (%%u)%u | (%%p)%p\n", c, str, i, i, o, h, h, u, p)),
				ft_itoa(printf("> (%%c)%c | (%%s)%s | (%%d)%d | (%%i)%i | (%%o)%o | (%%x)%x | (%%X)%X | (%%u)%u | (%%p)%p\n", c, str, i, i, o, h, h, u, p))) != 0)
		ft_putendl(">retour: \e[0;31m x \e[0;m");
	else 
		ft_putendl(">retour: \e[0;32m o \e[0;m");
	ft_putchar('\n');*/
}

int	main(void)
{
	printf_test();
	basic_test();
	return (0);
}
