int ft_atoi(const char *str)
{
    int i;
    int flag;
    int ans;

    i = 0;
    flag = -1;
    ans = 0;
    while ((9 <= str[i] && str[i] <= 13) || str[i] == ' ')
        i++;
    if (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
            flag *= -1;
        i++;
    }
    while ('0' <= str[i] && str[i] <= '9')
    {
        ans = ans * 10 - (str[i] - '0');
        i++;
    }
    return (ans * flag);
}