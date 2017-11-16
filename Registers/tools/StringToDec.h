// Convert String to Decimal
i32 StringToDec(string val)
{
    i32 res;
    stringstream stream;
    stream << val;
    stream >> res;
    return res;
}

