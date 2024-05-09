class GPSCoord {
 private:
  // latitude, longitude, eleveation:
  double lat, lng, elev;

 public:
  // set latitude and longitude
  void set(double la, double lo);
  void setElevation(double val);
  double getLatitude();
  double getLongitude();
};


