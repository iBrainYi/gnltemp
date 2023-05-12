/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clem <clem@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 22:19:46 by cldias            #+#    #+#             */
/*   Updated: 2023/05/12 07:09:53 by clem             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

# include <stdlib.h>
# include <unistd.h>

//#include <stdio.h>

int		ft_strlen(char *str);

char	*get_next_line(int fd);

char	*ft_strchr(char *str, int c);

char	*ft_strjoin(char *str, char *buff);

char	*new_str(char *str);

char	*clean_line(char *str);
#endif
