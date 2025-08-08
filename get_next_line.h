/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkhojazo <zkhojazo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 14:49:26 by zkhojazo          #+#    #+#             */
/*   Updated: 2024/12/19 22:13:16 by zkhojazo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 12
# endif

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

void	ft_lstadd_back_gnl(t_list **lst, void *data);
int		ft_lstclear(t_list **lst, void (*del)(void *));
char	*ft_strchr(const char *s, int c);
int		ft_strcpy_len(char **dst, char *src, int len);
char	*ft_line_assembly(t_list **lst, char **residual, int read_n);
int		ft_read_lst(int fd, t_list **lst, int temp_rd, int acum);
char	*ft_create_residual(char *str, char	**residual, char **line);
char	*get_next_line(int fd);
int		ft_free_rd(char *buffer, t_list **lst);
#endif
