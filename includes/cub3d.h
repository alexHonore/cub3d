/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anshimiy <anshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 15:26:12 by anshimiy          #+#    #+#             */
/*   Updated: 2022/11/21 13:54:27 by anshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB3D_H
# define CUB3D_H

/* ****** INCLUDES ****** */

# include 	"my_lib/mylib.h"
# include	<stdarg.h>
# include	<stdio.h>
# include	<limits.h>
# include	<stddef.h>
# include	<stdlib.h>
# include	<unistd.h>
# include	<math.h>
# include	<complex.h>
# include	<fcntl.h>
# include	<mlx.h>

# define DBQUOTE 34
# define SQUOTE 39
# define PIPE 124
# define SPACE 32
# define DOLLAR 36
# define DOUBLEPIPE 123
# define DOUBLEAMPERSAND 125

typedef enum e_shell_status {
    RUNNING,
    OVER,
} t_shell_status;

/* ****** STRUCTS ****** */

typedef struct s_env
{
	char			*cmd;
	char			*expand;
	struct s_env	*next;

}					t_env;

typedef struct s_shell
{
	char			*prompt;
	char			**argv;
	t_shell_status	shell_status;
	int				size;
	int				nb_cmd;
	char			**envp;
	t_env			*env;

}					t_shell;

/* ****************************** FUNCTIONS ****************************** */

/* ******   CUB3D   ****** */

/* ******    PARSING    ****** */

/* ******     INIT      ****** */

/* ******     UTILS     ****** */

/* ******      ENV      ****** */

/* ******     LOGS      ****** */

/* ******   EXECUTION   ****** */


#endif