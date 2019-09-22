#include<string>
#include<vector>
#include "planes.h"
#include "crews.h"
#include "flight.h"

using namespace std;

class flights
{
  public:
  vector<flight*> flightList;                                                      //three vectors needed to store the flights, pilots and crew members
  vector<crew*> crewIDlist;
  vector<crew*> pioltIDlist;
  void addFlight(planes& allPlanes, crews& allCrews);
  void editFlight();                                                              //set and get functions needed to add, edit, delete, print or search for a flight
  void deleteFlight();
  void printFlight(planes& allPlanes, crews& allCrews);
  void searchFlight();
};
