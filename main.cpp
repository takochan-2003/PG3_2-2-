#include <stdio.h>
#include "PSP.h"
#include "PS4.h"

int main() {

	PSvita* psvita[] = {
		new PSvita(),
		new PSP(),
		new PS4()
	};

	psvita[0]->Vita();
	psvita[1]->Vita();
	psvita[2]->Vita();

	return 0;
}