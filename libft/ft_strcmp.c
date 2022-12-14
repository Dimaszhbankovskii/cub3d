/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjose <vjose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 16:58:39 by vjose             #+#    #+#             */
/*   Updated: 2022/09/18 16:58:40 by vjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(char const *str1, char const *str2)
{
	size_t	i;

	i = 0;
	while (i < ft_strlen(str1) || i < ft_strlen(str2))
	{
		if (str1[i] != str2[i] || !str1[i] || !str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
