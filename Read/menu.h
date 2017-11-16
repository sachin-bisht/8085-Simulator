
void menu()
{
    cout << "\n\t\t*********8085 simulator*********\n\n";
    while(1)
    {
        register_default();
        st_add = -1;
        linecount = 0;
        tempPC = 0;
        cout << "Select the following option :-\n'A' - Input file\n'B' - Write program on terminal\n'X' - Exit\nSelect : ";
        string ch1;
        getline(cin, ch1);
        ch1 = to_upper(ch1);
        if(ch1 == "A")
        {
            cout << "\nInput valid file_name : ";
            string fname;
            getline(cin, fname);
            readFromFile(fname);

            ifstream file(fname);
            if(!file.is_open())
                continue;
            else
                file.close();
        }
        else if(ch1 == "B")
        {
            cout << "Type 'EOF' at the end to run the program\n";
            CLI();
        }
        else if(ch1 == "X")
        {
            cout << "Thank You\n";
            break;
        }
        else
        {
            invalid_option
            continue;
        }

        while(1)
        {
            register_default();
            cout << "\nPress 'R' to compile the program\nPress 'D' to enter debugger mode\nPress 'X' to exit\nSelect : ";
            string ch2;
            cin.clear();
            getline(cin, ch2);
            ch2 = to_upper(ch2);
            if(ch2 == "R")
            {
                if(st_add == -1 || st_add >= 65536)
                    syntax_error
                else
                {
                    complier(st_add, tempPC);
                    if(hlt)
                        print();
                    else
                        cout << "Syntax Error :: HLT command not found\n";
                }
            }
            else if(ch2 == "D")
            {
                debugger();
            }
            else if(ch2 == "X")
            {
                break;
            }
            else
                invalid_option
        }
        cout << "\nPress 1 to continue : ";
        getline(cin, ch1);
        if(ch1 != "1")
        {
            cout << "Thank You\n";
            break;
        }

    }

}
