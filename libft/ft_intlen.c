/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msariasl <msariasl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 16:37:37 by msariasl          #+#    #+#             */
/*   Updated: 2023/05/07 16:37:39 by msariasl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	higher_nums(int num)
{
	if (num >= 10000000)
	{
		if (num >= 1000000000)
			return (10);
		if (num >= 100000000)
			return (9);
		return (8);
	}
	if (num >= 1000000)
		return (7);
	return (6);
}

int	ft_intlen(int num)
{
	if (num >= 100000)
		return (higher_nums(num));
	else
	{
		if (num >= 1000)
		{
			if (num >= 10000)
				return (5);
			return (4);
		}
		else
		{
			if (num >= 100)
				return (3);
			if (num >= 10)
				return (2);
		}
		return (1);
	}
}
