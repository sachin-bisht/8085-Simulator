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
        
       i8 nibble1 = v1 % 16;
	   i8 nibble2 = 1;
	   if(nibble2 > nibble1)
			acf = 1;
       else
            acf = 0;
	        
        v1 -= 1;
        
   	    if(v1 >= (1<<4))
        	sf = 1;
        else
        	sf = 0;
        if(v1 < 0)
        {
        	cf = 1;
        }
   	    else
        {
        	cf = 0;
        }
       	if(v1 == 0)
       		zf = 1;
       	else
       		zf = 0;
       
		if(v1 < 0)
			v1 += (1<<8);

   	    i8 v5 = v1;
	    i8 co = 0;
	   	while(v5 > 0)
	    {
	        co += (v5 % 2);
	        v5 /= 2;
	    }
	    if(co % 2)  //Odd parity
	    {
	        pf = 0;
	    }
	    else        //Even parity
    	{
	        pf = 1;
	    }
        address[val] = v1;
        
   }
    else
    {
        if(ch[0] == 'A'|| ch[0] == 'B' || ch[0] == 'C' || ch[0] == 'D' || ch[0] == 'E' || ch[0] == 'H' || ch[0] == 'L')
        {
        	i8 v1 = reg[ch[0]];
	        i8 nibble1 = v1 % 16;
	        i8 nibble2 = 1;
	        if(nibble2 > nibble1)
	            acf = 1;
	        else
	            acf = 0;
	        
	        v1 -= 1;
        
    	    if(v1 >= (1<<4))
	        	sf = 1;
	        else
	        	sf = 0;
	        if(v1 < 0)
	        {
	        	cf = 1;
	        }
    	    else
	        {
	        	cf = 0;
	        }
	       	if(v1 == 0)
	       		zf = 1;
	       	else
	       		zf = 0;
        
			if(v1 < 0)
				v1 += (1<<8);
    	    i8 v5 = v1;
		    i8 co = 0;
	    	while(v5 > 0)
		    {
		        co += (v5 % 2);
		        v5 /= 2;
		    }
		    if(co % 2)  //Odd parity
		    {
		        pf = 0;
		    }
		    else        //Even parity
	    	{
		        pf = 1;
		    }
		    
            reg[ch[0]] -= 1;
            if(reg[ch[0]] < 0)
            	reg[ch[0]] += (1<<8);
        }
        else    invalid_register
    }
}
