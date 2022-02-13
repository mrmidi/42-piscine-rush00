/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashabeln <ashabeln@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 22:57:32 by ashabeln          #+#    #+#             */
/*   Updated: 2022/02/13 08:59:56 by ashabeln         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	rush03(int x, int y);

void	rush(int x, int y)
{
	rush03(x, y);
}

int	main(void)
{
	rush(5, 10);
	return (0);
}
