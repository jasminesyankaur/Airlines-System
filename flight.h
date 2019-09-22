#include<string>

using namespace std;

class flight
{
private:
  string flightTailnumber;
  string planeId;
  int numpilots;
  int numCabcrew;                                     //temporary variables needed to create a flight
  string startDT;
  string endDT;
  string startAircode;
  string endAircode;
  int numPassengers;
  int status;
public:
  void setFlightId(string planeid);
  string getFlightId();
  void setNumpilots(int pilots);
  int getNumpilots();
  void setNumcrew(int currnumCabCrew);
  int getNumcrew();
  void setStartDT(string startdt);
  string getStartDT();
  void setEndDT(string enddt);
  string getEndDT();                            //set/get functions needed to create the flight
  void setStartcode(string aircode);
  string getStartcode();
  void setEndcode(string endecode);
  string getEndcode();
  void setNumpassengers(int pass);
  int getNumpassengers();
  void setStatus(int Status);
  int getStatus();
};
