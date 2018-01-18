/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briviere <briviere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 14:32:25 by briviere          #+#    #+#             */
/*   Updated: 2018/01/17 15:10:55 by alecott          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../printf.h"

char	*ft_strdup(const char *s1)
{
	char	*dst;
	size_t	idx;
	size_t	len;

	if (s1 == NULL)
		return (NULL);
	len = ft_strlen(s1);
	if ((dst = malloc(sizeof(char) * len + 1)) == 0)
		return (0);
	idx = 0;
	while (idx <= len)
	{
		dst[idx] = s1[idx];
		idx++;
	}
	return (dst);
}