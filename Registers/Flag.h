void register_default()
{
    PC = 0;
	PSW = 0;
	cf = sf = zf = pf = acf = 0;
	hlt = 0;
    reg['A'] = 0, reg['B'] = 0, reg['C'] = 0, reg['D'] = 0, reg['E'] = 0, reg['H'] = 0, reg['L'] = 0;
    changePC = -1;
    return;
}

void checkcarry(i8 var1, i8 var2, bool check)
{
	if(check)	//Add
	{
	    i16 res = (i16)var1 + var2;

	    if(res >= (1<<8))
    	{
	        cf = 1;
    	}
	    else
	        cf = 0;
	}
	else	//Subtraction
	{
		if(var2 > var1)
            cf = 1;
        else
            cf = 0;
	}
}

void checkparity()
{
	i8 val = reg['A'];
    i8 co = 0;
    while(val > 0)
    {
        co += (val % 2);
        val /= 2;
    }
    if(co % 2)  //Odd parity
    {
        pf = 0;
    }
    else        //Even parity
    {
        pf = 1;
    }
    return;
}

void checkauxiliary(i8 val1, i8 val2, bool check)
{
    if(check)   //Add
    {
        i8 nibble1 = val1 % 16;
        i8 nibble2 = val2 % 16;
        val1 += val2;
        if(val1 > 16)
        {
            acf = 1;
        }
        else
        {
            acf = 0;
        }
    }
    else    //Subtract
    {
        if(val2 > val1)
            acf = 1;
        else
            acf = 0;
    }
    return;
}

void checkzero()
{
	i8 val = reg['A'];
    if(val == 0)
        zf = 1;
    else
        zf = 0;
    return;
}

void checksign()
{
	i8 val = reg['A'];
    if(val & (1<<7))    //Negative
        sf = 1;
    else
        sf = 0;
}


void checkcarry16(i16 var1, i16 var2, bool check)
{
	if(check)	//Add
	{
	    i32 res = (i32)var1 + var2;

	    if(res >= (1<<16))
    	{
	        cf = 1;
    	}
	    else
	        cf = 0;
	}
	else	//Subtraction
	{
		if(var2 > var1)
            cf = 1;
        else
            cf = 0;
	}
}


void checkbefore(i8 val1, i8 val2, bool f)
{
    checkcarry(val1, val2, f);
    checkauxiliary(val1, val2, f);
}

void checkafter()
{
    checkparity();
    checkzero();
    checksign();
}
