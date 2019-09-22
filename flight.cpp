#include<iostream>
#include<string>
#include "flight.h"

void flight::setFlightId(string planeid)                                                                  //set/get functions needed to create the flight
{
  planeId = planeid;
}

string flight::getFlightId()
{
  return planeId;
}

void flight::setNumpilots(int pilots)
{
  numpilots = pilots;
}

int flight::getNumpilots()
{
  return numpilots;
}

void flight::setNumcrew(int currnumCabCrew)
{
  numCabcrew = currnumCabCrew;
}

int flight::getNumcrew()
{
  return numCabcrew;
}

void flight::setStartDT(string startdt)
{
  startDT = startdt;
}

string flight::getStartDT()
{
  return startDT;
}

void flight::setEndDT(string enddt)
{
  endDT = enddt;
}

string flight::getEndDT()
{
  return endDT;
}

void flight::setStartcode(string aircode)
{
  startAircode = aircode;
}

string flight::getStartcode()
{
  return startAircode;
}

void flight::setEndcode(string endecode)
{
  endAircode = endecode;
}

string flight::getEndcode()
{
  return endAircode;
}

void flight::setNumpassengers(int pass)
{
  numPassengers = pass;
}

int flight::getNumpassengers()
{
  return numPassengers;
}

void flight::setStatus(int Status)
{
  status = Status;
}

int flight::getStatus()
{
  return status;
}

/*void flight::setpilotID(string id)
{
  pilotsID = id;
}
string flight::getpilotID()
{
  return pilotsID;
}

void flight::setcmID(string id)
{
  cmID = id;
}
string flight::getcmID()
{
  return cmID;
}*/
