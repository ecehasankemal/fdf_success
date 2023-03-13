/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hece <hece@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 21:37:08 by hece              #+#    #+#             */
/*   Updated: 2023/03/13 22:02:12 by hece             ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 42
#endif

# include <stdlib.h>
# include <stdarg.h>
# include <fcntl.h>
# include <unistd.h>

// COLORS

# define TEXT_COLOR			0xFFFFFF
# define BACKGROUND			0x131313
# define MENU_BACKGROUND	0x181818

# define COLOR_BLUE         0x3f5efb
# define COLOR_DARK_PURPLE	0x615ae1
# define COLOR_PURPLE		0x9453ba
# define COLOR_PINKY		0xc94c92
# define COLOR_PINK         0xfc466b

// KEYS_MACOS

# define MOUSE_LEFT_BUTTON	1
# define MOUSE_RIGHT_BUTTON	2
# define MOUSE_THIRD_BUTTON	3
# define MOUSE_SCROLL_UP	4
# define MOUSE_SCROLL_DOWN	5
# define MOUSE_SCROLL_LEFT	6
# define MOUSE_SCROLL_RIGHT	7

# define ARROW_UP			126
# define ARROW_DOWN			125
# define ARROW_LEFT			123
# define ARROW_RIGHT		124

# define MAIN_PAD_ESC		53
# define MAIN_PAD_I			34
# define MAIN_PAD_P			35
# define MAIN_PAD_0			29
# define MAIN_PAD_1			18
# define MAIN_PAD_2			19
# define MAIN_PAD_3			20
# define MAIN_PAD_4			21
# define MAIN_PAD_5			23
# define MAIN_PAD_6			22
# define MAIN_PAD_7			26
# define MAIN_PAD_8			28
# define MAIN_PAD_9			25
# define MAIN_PAD_PLUS		27
# define MAIN_PAD_MINUS		24
# define MAIN_PAD_LESS		40
# define MAIN_PAD_MORE		37

// tools

int		ft_printf(const char *str, ...);
char	*get_next_line(int fd);

#endif
