/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 10:07:31 by gsmets            #+#    #+#             */
/*   Updated: 2019/10/15 16:50:55 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *str, unsigned int index, size_t len)
{
	char	*new;
	size_t	j;

	if (index >= ft_strlen(str))
		len = 0;
	if (!str)
		return (NULL);
	if (!(new = malloc((len + 1) * sizeof(char))))
		return (NULL);
	j = 0;
	while (len-- && str[index])
	{
		new[j] = str[index];
		j++;
		index++;
	}
	new[j] = '\0';
	return (new);
}
