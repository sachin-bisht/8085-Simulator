void complier(i32 starting_address, i32 end_address)
{
    PC = starting_address;
    for(i32 i = PC; i < end_address;)
    {
        if(opcode.find(memory[i][0]) != opcode.end())
        {
            opcode_call(i);
            //print();

            if(changePC != -1)
            {
                if(changePC >= starting_address && changePC < tempPC)
                {
                    i = changePC;
                    PC = i;
                }
                else
                {
                    invalid_address
                    return;
                }
                changePC = -1;
            }
            else
            {
                PC += opcode[memory[i][0]];
                i = PC;
            }
        }
        else
        {
            opcode_not_found
            break;
        }
    }
}
