/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuusela <vkuusela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 10:04:32 by vkuusela          #+#    #+#             */
/*   Updated: 2024/11/01 10:35:38 by vkuusela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <aio.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_isalpha(unsigned char character);
int		ft_isdigit(unsigned char character);
int		ft_isalnum(unsigned char character);
int		ft_isascii(unsigned char character);
int		ft_isprint(unsigned char character);
size_t	ft_strlen(const char *string);
void	*ft_memset(void *area, int byte, size_t length);
void	ft_bzero(void *area, size_t length);
void	*ft_memcpy(void *destination, const void *source, size_t length);
void	*ft_memmove(void *destination, const void *source, size_t length);
size_t	ft_strlcpy(char *destination, const char *source, size_t size);
size_t	ft_strlcat(char *destination, const char *source, size_t size);
int		ft_toupper(int character);
int		ft_tolower(int character);
char	*ft_strchr(const char *string, int character);
char	*ft_strrchr(const char *string, int character);
int		ft_strncmp(const char *first, const char *second, size_t length);
void	*ft_memchr(const void *source, int character, size_t length);
int		ft_memcmp(const void *first, const void *second, size_t length);
char	*ft_strnstr(const char *big, const char *little, size_t length);
int		ft_atoi(const char *string);
void	*ft_calloc(size_t elements, size_t size);
char	*ft_strdup(const char *string);
char	*ft_substr(char const *string, unsigned int start, size_t length);
char	*ft_strjoin(char const *prefix, char const *suffix);
char	*ft_strtrim(char const *string, char const *set);
char	**ft_split(char const *source, char character);
char	*ft_itoa(int integer);
char	*ft_strmapi(char const *string, char (*function)(unsigned int, char));
void	ft_striteri(char *string, void (*function)(unsigned int, char *));
void	ft_putchar_fd(char character, int file_descriptor);
void	ft_putstr_fd(char *string, int file_descriptor);
void	ft_putendl_fd(char *string, int file_descriptor);
void	ft_putnbr_fd(int number, int file_descriptor);

#endif
