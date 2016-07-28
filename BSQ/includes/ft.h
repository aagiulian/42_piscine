/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agiulian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/23 12:37:38 by agiulian          #+#    #+#             */
/*   Updated: 2016/07/27 21:40:08 by agiulian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include "ft_list.h"
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

char			*read_to_str(char *str);
char			*read_file_to_str(char *str, char *file);
void			ft_exec_bsq(char *str);
int				*checkcollin(char *str, char *ctab, int *pos, int count);
int				set_grid(int **grille, char **str, char *chartab, int *pos);
void			*ft_malloc(char *str, int size);
char			**ft_split_lines(char *str);
void			ft_putnbr(int nb);
void			ft_putchar(char c);
int				ft_strlen(char *str);
void			ft_putstr(char *str);
char			*ft_strcpy(char *dest, char *src);
void			ft_putstre(char *str);
char			*ft_cutstr(char *str, int size);
int				*find_square(int *pos, int **grille);
char			*ft_grep_char(char *str, char *ctab);
void			print_solved_grid(char *chartab, int *pos, char **tab);
char			*ft_strcat(char *dest, char *src);

#endif
