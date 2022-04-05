
#include <bur/plctypes.h>

#ifdef _DEFAULT_INCLUDES
	#include <AsDefault.h>
#endif

// amount of memory to be allocated for heap storage must be specified for every ANSI C++ program with the bur_heap_size variable
unsigned long bur_heap_size = 0xFFFF; 

void _INIT ProgramInit(void)
{
	// Insert code here 

}

void _CYCLIC ProgramCyclic(void)
{
	if(led1 == 1)
	{
		led[0] = 1;
	}
	else
	{
		led[0] = 0;
	}
	if(led2 == 1)
	{
		led[1] = 1;
	}
	else
	{
		led[1] = 0;
	}
	
	if(led3 == 1)
	{
		led[2] = 1;
	}
	else
	{
		led[2] = 0;
	}
	
	if(led4 == 1)
	{
		led[3] = 1;
	}
	else
	{
		led[3] = 0;
	}

}

void _EXIT ProgramExit(void)
{
	// Insert code here 

}
