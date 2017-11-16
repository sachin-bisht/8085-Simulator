
void dad(string ch)
{
    if(ch.size() != 1)
    {
        invalid_register
        return;
    }

    ch = to_upper(ch);

    i16 ori = reg['H'];
    ori = (ori<<8);
    ori += reg['L'];

    if(ch[0] == 'A')
    {
        i16 val = reg['A'];
        val = (val<<8);
        val += PSW;

        checkcarry16(ori, val, 1);

        ori += val;
    }
    else if(ch[0] == 'B')
    {
        i16 val = reg['B'];
        val = (val<<8);
        val += reg['C'];

        checkcarry16(ori, val, 1);

        ori += val;
    }
    else if(ch[0] == 'D')
    {
        i16 val = reg['D'];
        val = (val<<8);
        val += reg['E'];

        checkcarry16(ori, val, 1);

        ori += val;
    }
    else if(ch[0] == 'H')
    {
        i16 val = reg['H'];
        val = (val<<8);
        val += reg['L'];

        checkcarry16(ori, val, 1);

        ori += val;
    }
    else    invalid_register

    ori %= (1<<16);
    reg['L'] = ori % (1<<8);
    ori = (ori>>8);
    reg['H'] = ori;
}
