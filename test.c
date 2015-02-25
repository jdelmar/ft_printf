/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelmar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/18 14:05:54 by jdelmar           #+#    #+#             */
/*   Updated: 2015/02/24 21:36:35 by jdelmar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

int		main(void)
{
	int		nb;
	char	c;
	char	*str;
	int		ret;
	int		b;

	nb = 5;
	c = '%';
	str = "c est quoi les\0 histoires %h la ?";
	ret = printf("test %s test2 %s\n", str, str);
	printf("%i\n", ret);
	printf("%s qu'est ce que c est ? %d%c d'augmentation si c est pas un batard celui la!\n", str, nb, c);
	c = '\0';
	printf("Test%c ca marche ?\n%p\n", c, str);
	b = 214748;
	printf("%d", b);
	ft_putstr("tarace\n");
	return(0);
}
