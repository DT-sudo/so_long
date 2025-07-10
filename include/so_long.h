/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dt <dt@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 16:11:11 by dt                #+#    #+#             */
/*   Updated: 2025/07/05 17:06:57 by dt               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <fcntl.h>
# include <limits.h>
# include <stdarg.h>
# include <stdint.h>
# include <stdio.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>

int			BUFFER_SIZE = 20;

// utils funcs
static void	ft_isneg(int *n, int *neg, int *tmp);
static int	ft_itoa_len(int n);
static void	ft_itoa_write(char *str, int len, int n, int tmp);
char		*ft_itoa(int n);
int			ft_hex_len(unsigned int num);
void		ft_put_hex(unsigned int num, const char format);
int			ft_print_hex(unsigned int num, const char format);
int			ft_ptr_len(uintptr_t num);
void		ft_put_ptr(uintptr_t num);
int			ft_print_ptr(unsigned long long ptr);
int			ft_num_len(unsigned int num);
char		*ft_uitoa(unsigned int n);
int			ft_print_unsigned(unsigned int n);
void		ft_putstr(char *str);
int			ft_printstr(char *str);
int			ft_printnbr(int n);
int			ft_printpercent(void);
char		*ft_free(char *buffer, char *buf);
char		*ft_next(char *buffer);
char		*ft_line(char *buffer);
void	ft_putchar_fd(char c, int fd);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strchr(const char *string, int searchedChar );
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t elementCount, size_t elementSize);
size_t	ft_strlen(const char *theString);

#endif