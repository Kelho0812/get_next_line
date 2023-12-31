/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe <jorteixe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 16:51:37 by jorteixe          #+#    #+#             */
/*   Updated: 2023/10/26 18:24:40 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

char	*get_next_line(int fd);
char	*ft_strjoin(char *s1, const char *s2);
int		has_newline(char *str);
size_t	ft_strlen(const char *str);
char	*ft_substr(char *s);
size_t	ft_newlinelen(const char *str);
char	*ft_strdup(const char *s);
char	*ft_clean_str(char *str);
char	*ft_calloc(size_t nmemb, size_t size);
char	*norminettenz(char **str, char **buffer_str);

#endif