
void lda(string s)
{
    if(s.size() > 5 && s.size() < 1)
        invalid_address
    else if(s.size() == 5 && checkHex(s))
    {
        i32 val = HexToDec(s);
        if(val >= 65536)
        {
            invalid_address
            return;
        }
        if(address.find(val) != address.end())
            reg['A'] = address[val];
        else
        {
            invalid_address
            return;
        }
    }
    else if(s.size() <= 4)
    {
        if(checkHex(s))
        {
            i32 val = HexToDec(s);
            if(val >= 65536)
            	invalid_address
            if(address.find(val) != address.end())
                reg['A'] = address[val] % (1<<8);
            else
            {
                invalid_address
                return;
            }
        }
        else
            invalid_address
    }
}

