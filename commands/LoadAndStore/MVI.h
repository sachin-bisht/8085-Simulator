
void mvi(string ch1, string ch2)
{
    ch1 = to_upper(ch1);
    if(ch2.size() > 3)
    	invalid_value
    if(ch1.size() != 1 || !checkHex(ch2))
    {
        invalid_register
    }
    else if(ch1 == "M")
    {
        i16 val = reg['H'];
        val = (val<<8);
        val += reg['L'];

        i8 v1 = HexToDec(ch2);
        if(v1 >= 256)
        	invalid_value
        else if(address.find(val) != address.end())
            address[val] = v1;
        else
        {
            invalid_address
            return;
        }
    }
    else if(ch1 == "A" || ch1 == "B" || ch1 == "C" || ch1 == "D" || ch1 == "E" || ch1 == "H" || ch1 == "L")
    {
        i8 v1 = HexToDec(ch2);
		if(v1 >= 256)
        	invalid_value
        else
        	reg[ch1[0]] = v1;
    }
    else
        invalid_register
}
