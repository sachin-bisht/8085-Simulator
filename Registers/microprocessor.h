vector < vector<string> > memory(65536);
map <i16, i8> address;
map <string, i8> opcode;
map <i32, i32 > lineadd;
i32 st_add;
i32 linecount;
i32 tempPC;
i8 PSW;
i32 PC;
i32 changePC;
bool hlt;
map <char, i8> reg;
bool cf, sf, zf, pf, acf;

