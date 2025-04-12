/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizz_buzz.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 12:35:16 by yosherau          #+#    #+#             */
/*   Updated: 2025/04/12 13:30:48 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	ft_putnbr(int nbr)
{
	if (nbr >= 10)
		ft_putnbr(nbr / 10);
	ft_putchar(nbr % 10  + '0');
}

int	main(void)
{
	int	nbr;

	nbr = 0;
	while (++nbr < 100)
	{
		if (nbr % 15 == 0)
			ft_putstr("fizzbuzz\n");
		else if (nbr % 5 == 0)
			ft_putstr("buzz\n");
		else if (nbr % 3 == 0)
			ft_putstr("fizz\n");
		else
		{
			ft_putnbr(nbr);
			ft_putchar('\n');
		}
	}
}
