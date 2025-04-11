/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 12:20:54 by yosherau          #+#    #+#             */
/*   Updated: 2025/04/11 12:30:01 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_is_space(char c)
{
	if (c == 32 || (c >= 9 && c <= 13))
		return (1);
	return (0);
}

int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		while (*argv[1] && !ft_is_space(*argv[1]))
			ft_putchar(*argv[1]++);
	}
	ft_putchar('\n');
}
