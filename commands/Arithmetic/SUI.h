void sui(string s)
{
    if(s.size() <= 3 && checkHex(s))
    {
        i8 val = HexToDec(s);
        if(val >= 256)
        {
        	invalid_value
        	return;
        }
        checkbefore(reg['A'], val, 1);
        reg['A'] -= val;
        if(reg['A'] < 0)
        	reg['A'] += (1<<8);
        checkafter();
    }
    else
        invalid_value
}
