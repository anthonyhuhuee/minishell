/*
** EPITECH PROJECT, 2022
** strcmp
** File description:
** like a ctrl f
*/

int my_strcmp(char const *s1, char const *s2)
{
    int i = 0;
    int res = 0;
    while (s1[i] != '\0' || s2[i] != '\0') {
        if (s1[i] != s2[i]) {
            res = s1[i] - s2[i];
            return res;
        }
        i = i + 1;
    }
    return 0;
}
