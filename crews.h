#include<string>
#include<vector>
#include "crew.h"

using namespace std;

class crews
{
public:
  vector<crew*> crewList;               //vector needed to store a list of user entered crew members
  vector<pilot*> pilotList;
  vector<coPilot*> coList;
  vector<cabinCrew*> cabList;
  void addCrew();
  void editCrew();
  void deleteCrew();                    //functions needed to add, edit, delete, print or search for a crew member
  void printCrew();
  void searchCrew();
  //void crews::saveCrew();

};
