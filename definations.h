void print();

void setopcode();
void register_default();
void checkcarry(i8, i8, bool);
void checkcarry16(i8, i8, bool);
void checkparity();
void checkauxiliary(i8, i8, bool);
void checkzero();
void checksign();
void checkbefore(i8, i8, bool);
void checkafter();

#include "commands/definations.h"
#include "Read/definations.h"
#include "tools/definations.h"
