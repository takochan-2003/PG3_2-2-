#include <stdio.h>
#include "PSP.h"
#include "PS4.h"

int main() {

	SonyConsumer* sonyConsumer[] = {
		new SonyConsumer(),
		new PSP(),
		new PS4()
	};

	sonyConsumer[0]->Vita();
	sonyConsumer[1]->Vita();
	sonyConsumer[2]->Vita();

	return 0;
}