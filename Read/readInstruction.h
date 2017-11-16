void readInstruction(string s)  // INput one line from file
{
    linecount++;

    s = to_upper(s);    //To avoid case error
    vector <string> instruction;

    istringstream ob1(s);
	string str;
	while(getline(ob1,str,' '))
	{
		istringstream ob2(str);
		while(getline(ob2,str,','))
		{
			instruction.push_back(str);
		}
	}
	if(instruction.size() == 0)
    {
        linecount--;
        return;
    }
	/*for(int i = 0; i < instruction.size(); i++)
        cout << instruction[i] << " ";
    cout << "\n";*/
	if(linecount == 1)
    {
        if(instruction.size() != 1)
            syntax_error
        else if(checkHex(instruction[0]))
        {
            tempPC = HexToDec(instruction[0]);
            st_add = tempPC;
        }
    }
    else
    {
        if(tempPC >= 65536)
            out_of_bounds
        else
            memory[tempPC] = instruction;

        if(opcode.find(instruction[0]) != opcode.end())
            tempPC += opcode[instruction[0]];
        else
            tempPC += 1;
        lineadd[linecount] = tempPC;
    }

}
