void add(string ch)
{
    ch = to_upper(ch);
    if(ch.size() != 1)  invalid_register
    else if(ch == "M")
    {
        i16 val = reg['H'];
        val = (val<<8);
        val += reg['L'];
        i8 v1;
        if(address.find(val) != address.end())
            v1 = address[val];
        else
        {
            invalid_address
            return;
        }

        checkbefore(reg['A'], v1, 1);
        reg['A'] += v1;
        reg['A'] %= (1<<8);
        checkafter();
    }
    else
    {
        if(ch == "A" || ch == "B" || ch == "C" || ch == "D" || ch == "E" || ch == "H" || ch == "L")
        {
            checkbefore(reg['A'], reg[ch[0]], 1);
            reg['A'] += reg[ch[0]];
            reg['A'] %= (1<<8);
            checkafter();
        }
        else    invalid_register
    }
}
