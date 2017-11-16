i8 complement(i8 val)
{
    i8 res = 0, co = 0;
    while(co <= 8)
    {
        i8 temp = val % 2;
        temp = not temp;
        res += temp * (pow(2, co));
        co++;
        val /= 2;
    }
    return res;
}
