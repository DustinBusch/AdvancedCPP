#include "GPSCoord.h"

int main(){
  GPSCoord here;

  here.set(50.883849, 8.02959);

  here.setElevation(285.128);

  double lat = here.getLatitude();
  double lng = here.getLongitude();
}
