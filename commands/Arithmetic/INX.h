void inx(string ch)
{
    ch = to_upper(ch);
    if(ch.size() != 1)
        invalid_register
    else if(ch[0] == 'A')
    {
        i16 val = reg['A'];
        val = (val<<8);
        val += PSW;
        val += 1;
        val %= (1<<16);
        
        PSW = val % (1<<8);
        val = (val>>8);
        reg['A'] = val;
    }
    else if(ch[0] == 'B')
    {
        i16 val = reg['B'];
        val = (val<<8);
        val += reg['C'];
        val += 1;
        val %= (1<<16);
                
        reg['C'] = val % (1<<8);
        val = (val>>8);
        reg['B'] = val;
    }
    else if(ch[0] == 'D')
    {
        i16 val = reg['D'];
        val = (val<<8);
        val += reg['E'];
        val += 1;
        val %= (1<<16);

        reg['E'] = val % (1<<8);
        val = (val>>8);
        reg['D'] = val;
    }
    else if(ch[0] == 'H')
    {
        i16 val = reg['H'];
        val = (val<<8);
        val += reg['L'];
        val += 1;
        val %= (1<<16);
        
        reg['L'] = val % (1<<8);
        val = (val>>8);
        reg['H'] = val;
    }
    else    invalid_register
}
