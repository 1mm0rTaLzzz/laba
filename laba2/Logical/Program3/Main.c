
#include <bur/plctypes.h>

#ifdef _DEFAULT_INCLUDES
	#include <AsDefault.h>
#endif

void _INIT ProgramInit(void)
{
	
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

}

