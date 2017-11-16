//Check whether the string is hexadecimal number or not
bool checkHex(string s)
{
    s = to_upper(s);
    for(int i = 0; i < s.size() - 1; i++)
    {
        if(!((s[i] >= '0' && s[i] <= '9') || (s[i] >= 'A' && s[i] <= 'F') ))
        {
            syntax_error
            return 0;
        }
    }
    return 1;
}
