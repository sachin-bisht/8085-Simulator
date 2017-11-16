
void setc(string s1, string s2)
{
    if(s1.size() > 5 || s2.size() > 3)
        invalid_address
    if(!checkHex(s1) || !checkHex(s2))
        invalid_value
    else
    {
        i32 v1 = HexToDec(s1);
        i32 v2 = HexToDec(s2);

        if(v1 >= 65536 || v2 >= 256)
            invalid_address
        else
        {
            address[v1] = v2;
        }
    }
}
