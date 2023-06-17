/*
** EPITECH PROJECT, 2023
** basic function
** File description:
** basic_function
*/

#ifndef basics_functions
    #define basics_functions

typedef struct linked_list_s {
    char **arg_in_array;
    struct linked_list_s *next;
} linked_list_t;

typedef struct buff_content_s {
    int count_end;
    int count_start;
    bool semicolon_exist;
    bool pipe_exist;
    int count_semi;
    int count_pipe;
    char *buff;
    linked_list_t *semicolon;
    linked_list_t *arg;
} buff_content_t;

typedef struct global_struct_s {
    char **env;
    buff_content_t *buff_content;
} global_struct_t;

linked_list_t *add_elem_list(linked_list_t *list, char **arg);

void reset_buff_content(buff_content_t *buff_content);
int read_user_stdin(buff_content_t *buff_content);
char *clear_buff(char *buff);
bool check_if_pipe_exist(char *str);
char **my_str_to_word_array(char *arg, int count_start);
char **path_str_to_word_array(char *arg);
int compare_string(const char *str, const char *str2);
char **copy_env(char **env);
char *clear_path(char *path_to_clear);
int count_arg_len(char **arg);
int search_for_arg_in_env(char *arg, char **env);
bool check_end_of_pipe(buff_content_t *buff_content);
int check_space_pipe(buff_content_t *buff_content);
void end_counter_change(buff_content_t *buff_content);
int my_strlen_in_str(char const *str, int i);
int close_all_fd(buff_content_t *buff_content,
int fd[buff_content->count_pipe][2]);
bool check_if_semi_exist(char *str);
void pipe_str_array(buff_content_t *buff_content);
void semi_str_array(buff_content_t *buff_content);
int check_space_semi(buff_content_t *buff_content);
bool check_end_of_semi(buff_content_t *buff_content);
char **put_in_word_array(char *arg, int count_start, int space_count);

#endif /* !basics_functions */
