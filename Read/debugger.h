
void debugger()
{
    cout << "********Debugger Mode********\n";
    i32 i = st_add;
    PC = st_add;
    i32 breakpt = INT_MIN;
    i32 co = 0;
    while(1)
    {
        cout << "Input command or type help to know about commands: \n";
        string s;
        getline(cin, s);
        s = to_upper(s);

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

        if(s == "HELP")
        {
            cout << "\nb line_number - It will set break point on given line number.\nEg : b 4   (It will run till line 4)\n";
            cout << "r - Run the program until it ends or breakpoint is encountered\n";
            cout << "s - It will run the program one instruction at a time";
            cout << "p register or memory location - It prints the value of register or memory location.\n";
            cout << "For eg - p A will print the value of register A. p 2500H will print the value at memory location 2500 if any\n";
            cout << "q - quit the debugger\n";
            cout << "help - how all the commands of debugger\n";
        }
        else if(s == "R")
        {
            if(breakpt >= 1)
            {
                co = lineadd[PC];
                while(co <= breakpt && co <= linecount && i < tempPC)
                {
                    co = lineadd[PC];
                    if(opcode.find(memory[i][0]) != opcode.end())
                    {
                        opcode_call(i);
                        //print();

                        if(changePC != -1)
                        {
                            if(changePC >= st_add && changePC < tempPC)
                            {
                                i = changePC;
                                PC = i;
                            }
                            else
                            {
                                invalid_address
                                continue;
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
                breakpt = INT_MIN;
            }
            else
                cout << "Error :: Invalid line number\n";
        }
        else if(s == "S")
        {
            if(co > linecount)
            {
                cout << "Error :: No more lines to debug\n";
                continue;
            }

            if(i < tempPC && opcode.find(memory[i][0]) != opcode.end())
            {

                opcode_call(i);
                //print();

                if(changePC != -1)
                {
                    if(changePC >= st_add && changePC < tempPC)
                    {
                        i = changePC;
                        PC = i;
                    }
                    else
                    {
                        invalid_address
                        continue;
                    }
                    changePC = -1;
                }
                else
                {
                    PC += opcode[memory[i][0]];
                    i = PC;
                }
                co = lineadd[PC];
            }
            else
            {
                opcode_not_found
                break;
            }
        }
        else if(s == "Q")
        {
            break;
        }
        else if(instruction.size() == 2)
        {
            string t5 = instruction[0];
            string t6 = instruction[1];
            if(t5.size() != 1)
                invalid_option
            else
            {
                if(t5 == "B" && checkNum(t6))
                    breakpt = StringToDec(t6);
                else if(t5 == "P")
                {
                    if(t6.size() == 1 && reg.find(t6[0]) != reg.end())
                        cout << hex << reg[t6[0]] << "\n";
                    else if(t6.size() <= 5 && checkHex(t6))
                    {
                        i32 val = HexToDec(t6);
                        if(val >= 65536 || address.find(val) == address.end())
                            invalid_address
                        else
                            cout << hex << address[val] << "\n";
                    }
                }
                else
                    invalid_option
            }
        }
        else
            invalid_option
    }
}
