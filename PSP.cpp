#include "PSP.h"
#include <stdio.h>

PSP::PSP()
{
	name = "PSP";
}

PSP::~PSP()
{
}

void PSP::Vita()
{
	printf("%s\n", name);
}
