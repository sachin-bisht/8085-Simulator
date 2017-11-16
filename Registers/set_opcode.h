void setopcode()
{
    opcode["MOV"] = 1;
    opcode["MVI"] = 2;
    opcode["LXI"] = 3;
    opcode["LDA"] = 3;
    opcode["STA"] = 3;
    opcode["LHLD"] = 3;
    opcode["SHLD"] = 3;
    opcode["STAX"] = 3;
    opcode["XCHG"] = 1;

    opcode["ADD"] = 1;
    opcode["ADI"] = 2;
    opcode["SUB"] = 1;
    opcode["INR"] = 1;
    opcode["DCR"] = 1;
    opcode["INX"] = 1;
    opcode["DCX"] = 1;
    opcode["DAD"] = 1;
    opcode["SUI"] = 2;

    opcode["CMA"] = 1;
    opcode["CMP"] = 1;

    opcode["JMP"] = 3;
    opcode["JC"] = 3;
    opcode["JNC"] = 3;
    opcode["JZ"] = 3;
    opcode["JNZ"] = 3;

    opcode["SET"] = 4;

    opcode["HLT"] = 1;
    return;

}

