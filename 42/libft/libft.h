/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidro2 <davidro2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 17:29:09 by davidro2          #+#    #+#             */
/*   Updated: 2023/10/18 17:50:12 by davidro2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

int		ft_isalnum(int c);

int		ft_isalpha(int c);

int		ft_isascii(int c);

int		ft_isdigit(int n);

int		ft_isprint(int c);

void	*ft_memset(void *str, int c, size_t n);

size_t	ft_strlen(const char *str);

void	ft_bzero(void *str, size_t n);

void	*ft_memcpy(void *dest, const void *src, size_t n);

void	*ft_memmove(void *dest, const void *src, size_t n);

size_t	ft_strlcpy(char *dest, const char *src, size_t size);

size_t	ft_strlcat(char *dest, const char *src, size_t size);

int		ft_toupper(int c);

int		ft_tolower(int c);

char	*ft_strchr(const char *str, int c);

char	*ft_strrchr(const char *str, int c);

int		ft_strncmp(const char *str1, const char *str2, size_t n);

void	*ft_memchr(const void *s, int c, size_t n);

int		ft_memcmp(const void *ptr1, const void *ptr2, size_t num);

char	*ft_strnstr(const char *hay, const char *needle, size_t n);

int		ft_atoi(const char *str);

void	*ft_calloc(size_t nitems, size_t size);

char	*ft_strdup(const char *string);

char	*ft_strjoin(char const *s1, char const *s2);

char	*ft_substr(char const *s, unsigned int start, size_t len);

char	*ft_strtrim(char const *s1, char const *set);

char	**ft_split(char const *s, char c);

char	*ft_itoa(int n);

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

void	ft_striteri(char *s, void (*f)(unsigned int, char *));

void	ft_putchar_fd(char c, int fd);

void	ft_putstr_fd(char *s, int fd);

void	ft_putendl_fd(char *s, int fd);

#endif