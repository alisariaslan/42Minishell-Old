/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_capitalize.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msariasl <msariasl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 16:37:13 by msariasl          #+#    #+#             */
/*   Updated: 2023/05/07 16:37:15 by msariasl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_capitalize(char *s)
{
	char	*new;
	int		i;

	if (!s)
		return (NULL);
	new = ft_strnew(ft_strlen(s));
	new[0] = ft_toupper(s[0]);
	i = 0;
	while (*(s + ++i))
	{
		if (!ft_isalnum(s[i - 1]) && ft_isalnum(s[i]))
			new[i] = ft_toupper(s[i]);
		else
			new[i] = s[i];
	}
	return (new);
}
