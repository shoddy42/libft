/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: wkonings <wkonings@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/03/09 21:37:00 by wkonings      #+#    #+#                 */
/*   Updated: 2022/12/15 19:58:27 by root          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>

typedef struct s_printf
{
	int	i;
	int	len;
	int	printed;

	int	width;
	int	precision;
	int	has_p;
	int	minus;
	int	zero;
	int	fd;
}				t_printf;

typedef void	t_fpoint(va_list args, t_printf *mem);

int		ft_printf(const char *format, ...);
int		ft_dprintf(int fd, const char *format, ...);
size_t	ft_strlen(const char *str);
size_t	ft_numlen_base(long n, int base);
size_t	ft_numlen_base_unsigned(unsigned long n, int base);
int		ft_putnbr_base_unsigned(unsigned long nb, long base, \
		int offset, t_printf *mem);
int		ft_putnbr_base(long nb, long base, int offset, t_printf *mem);
int		ft_atoi(const char *nb);
void	ft_precision(const char *format, va_list args, t_printf *data);
void	ft_width(const char *format, va_list args, t_printf *data);
void	ft_print_pointer(va_list args, t_printf *mem);
void	ft_print_int(va_list args, t_printf *mem);
void	ft_print_uint(va_list args, t_printf *mem);
void	ft_print_str(va_list args, t_printf *mem);
void	ft_print_hex(va_list args, t_printf *mem);
void	ft_print_uhex(va_list args, t_printf *mem);
void	ft_print_percent(va_list args, t_printf *mem);
void	ft_print_char(va_list args, t_printf *mem);
void	pad_prec(t_printf *mem, int len, char pad, int neg);
void	pad_width(t_printf *mem, int len, char pad, int neg);

#endif