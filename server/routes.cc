#include <isce/Route.h>

#include "controllers/info.h"

using namespace isce;

void Route::up() {

  Route::prefix("info")->middleware({})->group({
    Route::get("/server", Info::server),
    Route::get("/client", Info::client),
    Route::get("/database", Info::database),
  });

}
