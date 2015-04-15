#include "nmea-parser.hpp"

#include <string>
#include <iostream>

using namespace std;
using namespace nmea_parser;

int main() {

  const string NMEAString =
      "$GPRMC,123519,A,4807.038,N,01131.000,E,022.4,084.4,230394,003.1,W*6A";

  NMEAParser parser = NMEAParser();
  NMEAData gprmc = parser.parse(&NMEAString);

  std::cout << gprmc.Print();
  
  return 0;
}
