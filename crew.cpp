#include<iostream>
#include<string>
#include "crew.h"
                                                                                                                      //Set/get functions needed to create a crew member/pilot
using namespace std;

void crew::setName(string crewName)
{
  name = crewName;
}

string crew::getName()
{
  return name;
}

void crew::setId(string crewId)
{
  id = crewId;
}

string crew::getId()
{
  return id;
}

void crew::setStatus(int Statusc)
{
  statusc = Statusc;
}

int crew::getStatus()
{
  return statusc;
}

void pilot::setPID(string iden)
{
  pID = iden;
}

string pilot::getPID()
{
  return pID;
}

void pilot::setType(string type)
{
  pilot = "Pilot";
}

string pilot::getType()
{
  return pilot;
}

void pilot::setRate(string rate)
{
  prate = rate;
}

string pilot::getRate()
{
  return prate;
}

void pilot::setHours(string hour)
{
  phours = hour;
}

string pilot::getHour()
{
  return phours;
}

void coPilot::setCID(string cid)
{
  ident = cid;
}

string coPilot::getCID()
{
  return ident;
}

void coPilot::setTypec(string typec)
{
  co = "coPilot";
}

string coPilot::getTypec()
{
  return co;
}

void coPilot::setRatec(string rt)
{
  crate = rt;
}

string coPilot::getRatec()
{
  return crate;
}

void coPilot::setHourc(string h)
{
  chours = h;
}

string coPilot::getHourc()
{
  return chours;
}

void cabinCrew::setCabid(string cab)
{
  identi = cab;
}

string cabinCrew::getCabid()
{
  return identi;
}

void cabinCrew::setTypecrew(string cc)
{
  cabin = cc;
}

string cabinCrew::getTypecrew()
{
  return cabin;
}

void cabinCrew::setPosition(string num)
{
  position = num;
}

string cabinCrew::getP()
{
  return position;
}
