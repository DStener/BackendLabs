#include <iostream>

#include <isce/Utils.h>
#include <isce/Model.h>

#include <isce/Route.h>
#include <isce/Framework.h>

#include "config.h"
#include "dto.h"

using namespace isce;

int main() {

#ifdef _WIN32
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
#endif

	app()->config(CONFIG_PATH);
	app()->run();

	return 0;
}