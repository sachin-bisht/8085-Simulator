//To convert lowercases letter to UpperCases
string to_upper(string s)
{
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] >= 'a' && s[i] <= 'z')
        {
            i8 val = s[i] - 'a';
            s[i] = 'A' + val;
        }
    }
    return s;
}
