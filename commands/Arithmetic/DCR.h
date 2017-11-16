void dcr(string ch)
{
    ch = to_upper(ch);
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
        v1 -= 1;
        if(v1 < 0)
        	v1 += (1<<8);
        address[val] = v1;
        
   }
    else
    {
        if(ch[0] == 'A'|| ch[0] == 'B' || ch[0] == 'C' || ch[0] == 'D' || ch[0] == 'E' || ch[0] == 'H' || ch[0] == 'L')
        {
            reg[ch[0]] -= 1;
            if(reg[ch[0]] < 0)
            	reg[ch[0]] += (1<<8);
        }
        else    invalid_register
    }
}
