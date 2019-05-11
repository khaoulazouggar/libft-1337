/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzouggar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 17:30:32 by kzouggar          #+#    #+#             */
/*   Updated: 2019/04/18 23:00:22 by kzouggar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *tab;

	if ((tab = (char *)malloc(sizeof(char) * size + 1)) == NULL)
		return (NULL);
	ft_memset(tab, 0, size + 1);
	return (tab);
}
