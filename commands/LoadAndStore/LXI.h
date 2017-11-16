void lxi(string s1, string s2)
{
    if(s1.size() != 1 || !checkHex(s2) || s2.size() > 5)
        invalid_register
    else
    {
        i32 val = HexToDec(s2);
        if(val >= 65536)
        {
            invalid_address
            return;
        }
        i8 v1 = val % (1<<8);
        val = (val>>8);
        if(s1 == "A")
        {
            reg['A'] = val;
            PSW = v1;
        }
        else if(s1 == "B")
        {
            reg['B'] = val;
            reg['C'] = v1;
        }
        else if(s1 == "D")
        {
            reg['D'] = val;
            reg['E'] = v1;
        }
        else if(s1 == "H")
        {
            reg['H'] = val;
            reg['L'] = v1;
        }
        else
            invalid_register
    }
}
