
void cmp(string ch)
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

        if(reg['A'] < v1)
            cf = 1;
        else if(reg['A'] == v1)
            zf = 1;
        else
        {
            cf = 0;
            zf = 0;
        }
    }
    else
    {
        if(ch[0] == 'A')
        {
            zf = 1;
        }
        else if(ch[0] == 'B')
        {
            if(reg['A'] < reg['B'])
                cf = 1;
            else if(reg['A'] == reg['B'])
                zf = 1;
            else
            {
                cf = zf = 0;
            }
        }
        else if(ch[0] == 'C')
        {
            if(reg['A'] < reg['C'])
                cf = 1;
            else if(reg['A'] == reg['C'])
                zf = 1;
            else
            {
                cf = zf = 0;
            }
        }
        else if(ch[0] == 'D')
        {
            if(reg['A'] < reg['D'])
                cf = 1;
            else if(reg['A'] == reg['D'])
                zf = 1;
            else
            {
                cf = zf = 0;
            }
        }
        else if(ch[0] == 'E')
        {
            if(reg['A'] < reg['E'])
                cf = 1;
            else if(reg['A'] == reg['E'])
                zf = 1;
            else
            {
                cf = zf = 0;
            }
        }
        else if(ch[0] == 'H')
        {
            if(reg['A'] < reg['H'])
                cf = 1;
            else if(reg['A'] == reg['H'])
                zf = 1;
            else
            {
                cf = zf = 0;
            }
        }
        else if(ch[0] == 'L')
        {
            if(reg['A'] < reg['L'])
                cf = 1;
            else if(reg['A'] == reg['L'])
                zf = 1;
            else
            {
                cf = zf = 0;
            }
        }
        else
        {
            invalid_register
        }
    }
}

