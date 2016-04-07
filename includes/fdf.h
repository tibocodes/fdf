/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfolly <tfolly@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/07 14:12:13 by tfolly            #+#    #+#             */
/*   Updated: 2016/04/07 16:20:09 by tfolly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H
# include "../libft/includes/libft.h"
# include "get_next_line.h"
# include <fcntl.h>
# include "mlx.h"

typedef struct			s_map
{
    struct s_map		*right;
    struct s_map		*down;
	int					x;
	int					y;
	int					z;

}						t_map;

t_map					*read_map(char *av1);
void					print_map(t_map *map);
#endif
