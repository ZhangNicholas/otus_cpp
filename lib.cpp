#include "lib.h"

#include "version.h"
#include <iostream>

int version()
{
	#ifdef IS_BUILD_LOCAL	
	std :: cout << "local" << std :: endl;
	#endif
	return PROJECT_VERSION_PATCH;
}