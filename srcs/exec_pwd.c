/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exec_pwd.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-makh <hel-makh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 17:16:11 by ybensell          #+#    #+#             */
/*   Updated: 2022/03/31 00:07:16 by hel-makh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"

int	builtin_pwd(void)
{
	char	buff[4096];

	if (!getcwd(buff, 4096))
	{
		perror("minishell");
		return (EXIT_FAILURE);
	}
	ft_putendl_fd(buff, STDOUT_FILENO);
	return (EXIT_SUCCESS);
}
