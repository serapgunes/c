/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgunes <sgunes@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 17:40:15 by sgunes            #+#    #+#             */
/*   Updated: 2023/09/03 19:36:47 by sgunes           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	num(int nb)
{
	int	nb1;
	int	nb2;

	nb1 = nb / 10 + 48;
	nb2 = nb % 10 + 48;
	write(1, &nb1, 1);
	write(1, &nb2, 1);
}

void	ft_print_comb2(void)
{
	int	g;
	int	h;

	g = 0;
	h = 0;
	while (g <= 99)
	{
		h = g + 1;
		while (h <= 99)
		{
			num(g);
			write(1, " ", 1);
			num(h);
			if (!(g == 98 && h == 99))
			{
				write(1, ", ", 2);
			}
			h++;
		}
		g++;
	}
}
