void opcode_call(i32 i)
{
    if(memory[i][0] == "MOV")
    {
        if(memory[i].size() != 3)   cout << "Syntax Error :: Invalid Command\n";
        else    mov(memory[i][1], memory[i][2]);
    }
    else if(memory[i][0] == "MVI")
    {
        if(memory[i].size() != 3)   cout << "Syntax Error :: Invalid Command\n";
        else    mvi(memory[i][1], memory[i][2]);
    }
    else if(memory[i][0] == "LXI")
    {
        if(memory[i].size() != 3)   cout << "Syntax Error :: Invalid Command\n";
        else    lxi(memory[i][1], memory[i][2]);
    }
    else if(memory[i][0] == "LDA")
    {
        if(memory[i].size() != 2)   cout << "Syntax Error :: Invalid Command\n";
        else    lda(memory[i][1]);
    }
    else if(memory[i][0] == "STA")
    {
        if(memory[i].size() != 2)   cout << "Syntax Error :: Invalid Command\n";
        else    sta(memory[i][1]);
    }
    else if(memory[i][0] == "LHLD")
    {
        if(memory[i].size() != 2)   cout << "Syntax Error :: Invalid Command\n";
        else    lhld(memory[i][1]);
    }
    else if(memory[i][0] == "SHLD")
    {
        if(memory[i].size() != 2)   cout << "Syntax Error :: Invalid Command\n";
        else    shld(memory[i][1]);
    }
    else if(memory[i][0] == "STAX")
    {
        if(memory[i].size() != 2)   cout << "Syntax Error :: Incomplete command\n";
        else    stax(memory[i][1]);
    }
    else if(memory[i][0] == "XCHG")
    {
        if(memory[i].size() != 1)   cout << "Syntax Error :: Invalid Command\n";
        else    xchg();
    }
    else if(memory[i][0] == "ADD")
    {
        if(memory[i].size() != 2)   cout << "Syntax Error :: Invalid Command\n";
        else    add(memory[i][1]);
    }
    else if(memory[i][0] == "ADI")
    {
        if(memory[i].size() != 2)   cout << "Syntax Error :: Invalid Command\n";
        else    adi(memory[i][1]);
    }
    else if(memory[i][0] == "SUB")
    {
        if(memory[i].size() != 2)   cout << "Syntax Error :: Invalid Command\n";
        else    sub(memory[i][1]);
    }
    else if(memory[i][0] == "INR")
    {
        if(memory[i].size() != 2)   cout << "Syntax Error :: Invalid Command\n";
        else    inr(memory[i][1]);
    }
    else if(memory[i][0] == "DCR")
    {
        if(memory[i].size() != 2)   cout << "Syntax Error :: Invalid Command\n";
        else    dcr(memory[i][1]);
    }
    else if(memory[i][0] == "INX")
    {
        if(memory[i].size() != 2)   cout << "Syntax Error :: Invalid Command\n";
        else    inx(memory[i][1]);
    }
    else if(memory[i][0] == "DCX")
    {
        if(memory[i].size() != 2)   cout << "Syntax Error :: Invalid Command\n";
        else    dcx(memory[i][1]);
    }
    else if(memory[i][0] == "DAD")
    {
        if(memory[i].size() != 2)   cout << "Syntax Error :: Invalid Command\n";
        else    dad(memory[i][1]);
    }
    else if(memory[i][0] == "SUI")
    {
        if(memory[i].size() != 2)   cout << "Syntax Error :: Invalid Command\n";
        else    sui(memory[i][1]);
    }
    else if(memory[i][0] == "CMA")
    {
        if(memory[i].size() != 1)   cout << "Syntax Error :: Invalid Command\n";
        else    cma();
    }
    else if(memory[i][0] == "CMP")
    {
        if(memory[i].size() != 2)   cout << "Syntax Error :: Invalid Command\n";
        else    cmp(memory[i][1]);
    }
    else if(memory[i][0] == "JMP")
    {
        if(memory[i].size() != 2)   cout << "Syntax Error :: Invalid Command\n";
        else    jmp(memory[i][1]);
    }
    else if(memory[i][0] == "JC")
    {
        if(memory[i].size() != 2)   cout << "Syntax Error :: Invalid Command\n";
        else    jc(memory[i][1]);
    }
    else if(memory[i][0] == "JNC")
    {
        if(memory[i].size() != 2)   cout << "Syntax Error :: Invalid Command\n";
        else    jnc(memory[i][1]);
    }
    else if(memory[i][0] == "JZ")
    {
        if(memory[i].size() != 2)   cout << "Syntax Error :: Invalid Command\n";
        else    jz(memory[i][1]);
    }
    else if(memory[i][0] == "JNZ")
    {
        if(memory[i].size() != 2)   cout << "Syntax Error :: Invalid Command\n";
        else    jnz(memory[i][1]);
    }
    else if(memory[i][0] == "SET")
    {
        if(memory[i].size() != 3)   cout << "Syntax Error :: Invalid Command\n";
        else    setc(memory[i][1], memory[i][2]);
    }
    else if(to_upper(memory[i][0]) == "HLT")
    {
        hlt = 1;
    }
}
