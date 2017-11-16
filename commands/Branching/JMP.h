void jmp(string s)
{
    if(s.size() > 5)
        invalid_address
    else if(checkHex(s))
    {
        i32 val = HexToDec(s);
        if(val >= 65536)
            invalid_address
        else
        {
            changePC = val;
        }
    }
    else
        invalid_address
}
