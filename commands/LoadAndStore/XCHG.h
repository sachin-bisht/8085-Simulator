
void xchg()
{
    i8 temp = reg['H'];
    reg['H'] = reg['D'];
    reg['D'] = temp;

    temp = reg['L'];
    reg['L'] = reg['E'];
    reg['E'] = temp;
}
