/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe <jorteixe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 14:39:45 by jorteixe          #+#    #+#             */
/*   Updated: 2023/10/26 18:12:16 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strjoin(char *s1, const char *s2)
{
	char	*new_str;
	int		i;
	int		n;

	if (!s1)
		s1 = ft_calloc(1, 1);
	if (!s2)
		return (NULL);
	new_str = ft_calloc(ft_strlen(s1) + ft_strlen(s2) + 1, 1);
	i = 0;
	n = 0;
	while (s1[i] != '\0')
	{
		new_str[n++] = s1[i++];
	}
	i = 0;
	while (s2[i] != '\0')
	{
		new_str[n++] = s2[i++];
	}
	new_str[n] = '\0';
	free(s1);
	return (new_str);
}

size_t	ft_strlen(const char *str)
{
	size_t	i;

	if (!str)
	{
		return (0);
	}
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_substr(char *s)
{
	int		i;
	char	*s1;

	i = 0;
	if (!*s)
	{
		return (NULL);
	}
	while (s[i] && s[i] != '\n')
		i++;
	s1 = ft_calloc(i + 2, 1);
	if (!s1)
	{
		return (NULL);
	}
	i = 0;
	while (s[i] && s[i] != '\n')
	{
		s1[i] = s[i];
		i++;
	}
	s1[i] = s[i];
	return (s1);
}

char	*ft_calloc(size_t nmemb, size_t size)
{
	char	*ptr;
	int		i;

	ptr = malloc(nmemb * size);
	if (!ptr)
	{
		return (NULL);
	}
	i = 0;
	while (nmemb--)
	{
		ptr[i] = '\0';
		i++;
	}
	return (ptr);
}
