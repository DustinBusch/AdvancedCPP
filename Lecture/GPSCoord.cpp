#include "GPSCoord.h"

void GPSCoord::set(double la, double lo){
  lat = la; lng = lo;
}

void GPSCoord::setElevation(double val){
  elev = val;
}

double GPSCoord::getElevation(){
  return elev;
}

double GPSCoord::getLatitude(){
  return lat;
}
