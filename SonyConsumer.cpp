#include "SonyConsumer.h"
#include <stdio.h>

SonyConsumer::SonyConsumer()
{
	name = "ハード";
}

SonyConsumer::~SonyConsumer() {}

void SonyConsumer::Vita()
{
	printf("ソニーの%s\n", name);
}
