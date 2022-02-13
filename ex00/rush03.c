/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashabeln <ashabeln@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 22:57:32 by ashabeln          #+#    #+#             */
/*   Updated: 2022/02/13 08:59:56 by ashabeln         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define UPPER_LEFT 'A'
#define UPPER_RIGHT 'C'
#define HORIZONTAL 'B'
#define VERTICAL 'B'
#define LOWER_LEFT 'A'
#define LOWER_RIGHT 'C'
#define SPACE ' '

void	ft_putchar(char c);

void	ft_printline(int length, char left, char fill, char right)
{
	int	i;

	i = 1;
	ft_putchar(left);
	while (i < length - 1)
	{
		ft_putchar(fill);
		i++;
	}
	if (length > 1)
		ft_putchar(right);
	ft_putchar('\n');
}

void	ft_makelines(int *cols, int *rows)
{
	int		i;

	i = 0;
	while (i < *rows)
	{
		if (i == (*rows - 1))
			ft_printline(*cols, LOWER_LEFT, HORIZONTAL, LOWER_RIGHT);
		else if (i == 0)
			ft_printline(*cols, UPPER_LEFT, HORIZONTAL, UPPER_RIGHT);
		else
			ft_printline(*cols, VERTICAL, SPACE, VERTICAL);
		i++;
	}
}

void	rush03(int x, int y)
{
	if (x >= 1 && y >= 1)
	{
        	ft_makelines(&x, &y);
	}
}
