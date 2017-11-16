//Check whether the string is integer number or not
bool checkNum(string s)
{
    s = to_upper(s);
    for(int i = 0; i < s.size(); i++)
    {
        if(!(s[i] >= '0' && s[i] <= '9'))
        {
            syntax_error
            return 0;
        }
    }
    return 1;
}

