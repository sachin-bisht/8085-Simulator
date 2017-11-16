void jz(string s)
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
                changePC = val;
            else    //never be too careful
                changePC = -1;
        }
    }
    else
        invalid_address
}
