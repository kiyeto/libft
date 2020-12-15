/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenouda <abenouda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 16:05:33 by abenouda          #+#    #+#             */
/*   Updated: 2019/10/30 20:07:07 by abenouda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len;
	int		i;
	int		j;
	char	*joinstr;

	len = 0;
	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	if ((joinstr = (char*)malloc(len + 1)) == NULL)
		return (NULL);
	while (s1[i] != 0)
	{
		joinstr[j++] = s1[i++];
	}
	i = 0;
	while (s2[i] != 0)
	{
		joinstr[j++] = s2[i++];
	}
	joinstr[j] = '\0';
	return (joinstr);
}
