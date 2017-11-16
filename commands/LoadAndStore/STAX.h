
void stax(string s1)
{
    if(s1.size() != 1)
        invalid_register
    else
    {
        if(s1 == "A")
        {
            i16 val;
            val = reg['A'];
            val = (val<<8);
            val += PSW;
            address[val] = reg['A'];
        }
        else if(s1 == "B")
        {
            i16 val;
            val = reg['B'];
            val = (val<<8);
            val += reg['C'];
            address[val] = reg['A'];
        }
        else if(s1 == "D")
        {
            i16 val;
            val = reg['D'];
            val = (val<<8);
            val += reg['E'];
            address[val] = reg['A'];
        }
        else if(s1 == "H")
        {
            i16 val;
            val = reg['H'];
            val = (val<<8);
            val += reg['L'];
            address[val] = reg['A'];
        }
        else
            invalid_register
    }
}
