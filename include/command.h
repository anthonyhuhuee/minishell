/*
** EPITECH PROJECT, 2023
** command
** File description:
** command
*/

#ifndef command
    #define command

int env_function(char **arg, char **env);
int exit_function(char **arg, char **env, buff_content_t *buff_content);
int cd_function(char **arg, char **env);

char **setenv_function(char **arg, char **env);
int setenv_handling(int len_arg, char **arg, char **env);;

char **unsetenv_function(char **arg, char **env);

int search_for_oldpwd(char **env);
int search_for_pwd(char **env);
char **replace_old_pwd(char **env);
char **replace_pwd(char **env);
char *tild_arg(char **arg, char **env);
char **dash_cd(char **env);

int execute_pipe(buff_content_t *buff_content, char **env);

#endif /* !command */
