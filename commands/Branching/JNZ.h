void jnz(string s)
{
    if(s.size() > 5)
        invalid_address
    if(checkHex(s))
    {
        i32 val = HexToDec(s);
        if(val >= 65536)
            invalid_address
        else
        {
            if(!zf)
                changePC = -1;
            else
                changePC = val;
        }
    }
    else
        invalid_address
}



