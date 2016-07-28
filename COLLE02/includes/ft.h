/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agiulian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/23 12:37:38 by agiulian          #+#    #+#             */
/*   Updated: 2016/07/24 17:08:13 by agiulian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include "ft_list.h"
# include <unistd.h>
# include <stdlib.h>

void			read_to_list(t_list **begin_list);
char			*ft_fill_tab(t_list *begin_list, int size);
t_list			*ft_create_elem(char data);
void			ft_list_push_back(t_list **begin_list, char data);
int				ft_list_size(t_list *begin_list);
int				check_col(char *str);
int				check_line(char *str);
char			*ft_put_line(int pos, char *tab, int *l_coord);
char			*ft_line(int cpt_ym, char *l_char, int *l_coord);
char			*colle(int x, int y, char *l_char);
int				ft_strcmp(char *s1, char *s2);
int				*check_result(int x, int y, char *str);
void			print_results(int *results, int x, int y);

#endif
