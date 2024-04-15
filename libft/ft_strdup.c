int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i] != 0)
        i++;
    return (i);
}

char    *ft_strdup(const char *str)
{
    char    *ans;
    int i;

    i = -1;
    ans = malloc(sizeof(char) * (ft_strlen(str) + 1));
    while (str[i++] != 0)
        ans[i] = str[i];
    ans[i] = 0;
    return (ans);
}