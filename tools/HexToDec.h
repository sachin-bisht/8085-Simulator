// Convert Hexadecimal to Decimal
i32 HexToDec(string val)
{
    i32 res;
    stringstream stream;
    stream << val;
    stream >> hex >> res;
    return res;
}
