void readFromFile(string file_name)
{
    ifstream file(file_name);
    if(file.is_open())
    {
        string line;
        while(getline(file, line))
        {
            readInstruction(line);
        }
        file.close();
    }
    else
        cout << "Error :: Unable to open file\n";
}
