void mov(string ch1, string ch2)
{
    ch1 = to_upper(ch1);
    ch2 = to_upper(ch2);
    if(ch1.size() != 1 || ch2.size() != 1)
        invalid_register
    else if(ch1 == ch2 && ch1 == "M")
        same_mem_location
    else if(ch1 != ch2)
    {
        if(ch1 == "M")
        {
            i16 val = reg['H'];
            val = (val<<8);
            val += reg['L'];
            if(ch2 == "A" || ch2 == "B" || ch2 == "C" || ch2 == "D" || ch2 == "E" || ch2 == "H" || ch2 == "L")
            {
                if(address.find(val) != address.end())
                    address[val] = reg[ch2[0]];
                else
                {
                    invalid_address
                    return;
                }
            }
            else
            {
                invalid_register
                return;
            }
        }
        else if(ch2 == "M")
        {
            if(ch1 == "A" || ch1 == "B" || ch1 == "C" || ch1 == "D" || ch1 == "E" || ch1 == "H" || ch1 == "L")
            {
                i16 val = reg['H'];
                val = (val<<8);
                val += reg['L'];

                if(address.find(val) != address.end())
                    reg[ch1[0]] = address[val];
                else
                {
                    invalid_address
                    return;
                }
            }
            else
            {
                invalid_register
                return;
            }
        }
        else
        {
            if((ch1 == "A" || ch1 == "B" || ch1 == "C" || ch1 == "D" || ch1 == "E" || ch1 == "H" || ch1 == "L") && (ch2 == "A" || ch2 == "B" || ch2 == "C" || ch2 == "D" || ch2 == "E" || ch2 == "H" || ch2 == "L"))
            {
                reg[ch1[0]] = reg[ch2[0]];
            }
            else
            {
                invalid_register
            }
        }
    }
}
