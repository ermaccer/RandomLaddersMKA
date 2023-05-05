#include "ps2mem.h"
#include "ladder.h"

void init()
{
	 init_ladder_hook();
}


void INVOKER()
{
    asm("ei\n");
    asm("addiu $ra, -4\n");

    init();
}



int main()
{
    return 0;
}