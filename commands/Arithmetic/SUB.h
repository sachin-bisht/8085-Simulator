void sub(string ch)
{
    if(ch.size() != 1)
        invalid_register
    else if(ch[0] == 'M')
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

        checkbefore(reg['A'], v1, 0);
        reg['A'] -= v1;
        if(reg['A'] < 0)
        	reg['A'] += (1<<8);
        checkafter();
    }
    else
    {
        if(ch[0] == 'A')
        {
            checkbefore(reg['A'], reg[ch[0]], 0);
            reg['A'] -= reg[ch[0]];
            if(reg['A'] < 0)
        		reg['A'] += (1<<8);
            checkafter();
        }
        else
        {
            cout << "Syntax Error :: Invalid register\n";
        }
    }
}

