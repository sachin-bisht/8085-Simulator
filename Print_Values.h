void print()
{
    cout << "\n\n********OUTPUT :********\n";
    i32 v1 = reg['A'];

    //cout << "FLAG : " << sf << " " << zf << " " << acf << " " << pf << " " << cf << " " << PSW << "\n";
    PSW = (1<<0) * cf + (1<<2) * pf + (1<<4)*acf + (1<<6)*zf + (1<<7)*sf + PSW;
    PSW %= (1<<8);
    //cout << "Total lines : " << linecount << "\n";
    cout << "Accumulator : " << hex << v1 << "\n";
    cout << "Flag Register : " << hex << PSW << "\n";
    cout << "Starting Address : " << hex << st_add << "\n";
    cout << "Last Address : " << hex << tempPC << "\n";
}
