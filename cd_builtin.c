/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cd_builtin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msariasl <msariasl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 16:22:35 by msariasl          #+#    #+#             */
/*   Updated: 2023/05/12 11:51:59 by msariasl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

//path i ekrana yazdırır

static	void	print_pth(char *path)
{
	char	*parsed_home;

	parsed_home = parse_home_path(path, 0);
	ft_putstr(parsed_home);
	free(parsed_home);
}

//çalıştığımız klasörü değiştirir

void	change_dir(char *path, int print_path)
{
	char	*cwd;
	char	buff[4097];

	cwd = getcwd(buff, 4096);
	if (!chdir(path))
	{
		if (print_path)
		{
			print_pth(path);
			ft_putchar('\n');
		}
		set_env_var("OLDPWD", cwd);
	}
	else
	{
		ft_putstr("cd: ");
		if (access(path, F_OK) == -1)
			ft_putstr("no such file or directory: ");
		else if (access(path, R_OK) == -1)
			ft_putstr("permission denied: ");
		else
			ft_putstr("not a directory: ");
		ft_putendl(path);
	}
}
//inputun iki veya daha fazla argümanı var mı kontrol eder

static	int	has_two_args(char **args)
{
	char	*cwd;
	char	buff[4096 + 1];
	char	*tmp;

	if (args[1])
	{
		if (args[2])
		{
			ft_putendl("cd: too many arguments");
			return (1);
		}
		cwd = getcwd(buff, 4096);
		tmp = ft_strreplace(cwd, args[0], args[1]);
		if (!tmp)
		{
			ft_putstr("cd: string not in pwd: ");
			ft_putendl(args[0]);
			free(tmp);
			return (1);
		}
		change_dir(tmp, 1);
		free(tmp);
		return (1);
	}
	return (0);
}

//builtin cd komutu çalışır

int	cd_builtin(char **args)
{
	char	*home_path;

	home_path = get_env_var("HOME");
	if (!args[0])
	{
		change_dir(home_path, 0);
		return (1);
	}
	if (has_two_args(args))
		return (1);
	else
	{
		if (ft_strequ(args[0], "--"))
		{
			change_dir(home_path, 0);
			return (1);
		}
		else if (args[0][0] == '-' && !args[0][2])
		{
			change_dir(get_env_var("OLDPWD"), 1);
			return (1);
		}
		change_dir(args[0], 0);
	}
	return (1);
}
