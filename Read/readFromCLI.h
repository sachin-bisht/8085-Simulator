
void CLI()
{
    string line;
    while(1)
    {
        getline(cin, line);
        line = to_upper(line);
        if(line == "EOF")
            break;
        readInstruction(line);
    }
}
