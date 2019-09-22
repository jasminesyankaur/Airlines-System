#include<iostream>
#include<string>
#include<vector>
#include "crews.h"


void crews::addCrew()
{
  crew* crewptr = new crew;
  pilot* pilotptr = new pilot;
  coPilot* coptr = new coPilot;
  cabinCrew* cabptr = new cabinCrew;
  string pilotRate;
  string pilotHour;
  string pilotT = "pilot";
  string coRate;
  string coHour;
  string coT = "coPilot";
  string cabT = "Cabin Crew";
  string currName;
  string currId;                                            //temporary variables needed to store the user entered crew members
  int currstatusc;
  int type;
  string pos;


  cin.ignore();
  cout << "Enter crew member's name: ";
  getline(cin, currName);

  cout << "Enter crew member's ID: ";
  getline(cin, currId);

  cout << "Crew Member's Status - Enter 1 if available, 2 if  on leave or 3 if sick: ";
  cin >> currstatusc;
    if((currstatusc == 1)||(currstatusc == 2)||(currstatusc == 3))
    {
      crewptr->setStatus(currstatusc);
    }
    else
    {
      cout << "Invalid entery." << endl;
    }

  crewptr->setName(currName);
  crewptr->setId(currId);                       //using the set functions to send the temporary variables to the pointer
  crewList.push_back(crewptr);                  //sending pointer to vector to save the user entered crew member

  cout << "Crew Member Type - Enter 1 if Pilot, 2 if Co-Pilot, 3 if Cabin Crew: ";
  cin >> type;


  cin.ignore();

  switch(type)                                 //switch statement
  {
    case 1:
      pilotptr->setPID(currId);               //uses the set functions associated with the subClass and takes in user's data and puts into the designated vector
      pilotptr->setType(pilotT);

      cout << "Enter a rating for the pilot: ";
      getline(cin, pilotRate);
      pilotptr->setRate(pilotRate);

      cout << "Enter the cumulative flight hours as pilot: ";
      getline(cin, pilotHour);
      pilotptr->setHours(pilotHour);

      pilotList.push_back(pilotptr);
      break;

    case 2:
      coptr->setCID(currId);
      coptr->setTypec(coT);

      cout << "Enter a rating for the coPilot: ";
      getline(cin, coRate);
      coptr->setRatec(coRate);

      cout << "Enter the cumlative flight hours as coPilot: ";
      getline(cin, coHour);
      coptr->setHourc(coHour);

      coList.push_back(coptr);
      break;

    case 3:
      cabptr->setCabid(currId);
      cabptr->setTypecrew(cabT);

      cout << "Enter member's position: ";
      getline(cin, pos);

      cabptr->setTypecrew(cabT);
      cabptr->setPosition(pos);

      cabList.push_back(cabptr);
      break;
  }
}

void crews::editCrew()
{
  int edit;
  string currName;                              //temporary variables needed to edit a crew member
  string currId;
  int currstatusc;

  cout << "Enter the ID number of the crew member you would like to edit: ";              //asing the user for the crew members ID and then using a for loop to run through the vector of crew members to find the one the user wants to edit
  cin >> currId;

  for(int i = 0; i < crewList.size(); ++i)
  {
    if(currId == crewList.at(i)->getId())
    {
      cout << "Enter 1 to edit name or enter 2 to edit status: ";                           //using the set functions to store the newly edited crew member
      cin >> edit;

      if(edit == 1)
      {
        cin.ignore();
        cout << "Enter new name: ";
        getline(cin, currName);

        crewList.at(i)->setName(currName);
      }
      else if(edit == 2)
      {
        cout << "Crew Member's Status - Enter 1 if available, 2 if  on leave or 3 if sick: ";
        cin >> currstatusc;

        crewList.at(i)->setStatus(currstatusc);
      }
      else
      {
        cout << "Invalid entery." << endl;
      }
    }
  }
}

void crews::deleteCrew()
{
    string currId;
    unsigned int i;

    cout << "Enter the ID for the crew member you would like to delete: ";
    cin >> currId;

    for(i = 0; i < crewList.size(); ++i)                                        //function needed to delete a crew member from the vector
    {
      if(currId == crewList.at(i)->getId())
      {
        crewList.erase(crewList.begin()+i);
      }
    }
}


void crews::printCrew()
{
  unsigned int i;
  string temp;


  for(i = 0; i < crewList.size(); i++)
  {
    cout << "Crew member " << i+1 << endl;
    cout << "Name: " << crewList.at(i)->getName() << endl;                        //function needed to print the crew members vector
    cout << "ID: " << crewList.at(i)->getId() << endl;
    temp =  crewList.at(i)->getId();

    if(crewList.at(i)->getStatus() == 1)
    {
      cout << "Status: Available" << endl;
    }
    else if(crewList.at(i)->getStatus() == 2)
    {
      cout << "Status: On leave" << endl;
    }
    else
    {
      cout << "Status: Sick" << endl;
    }

    for(int j = 0; j < pilotList.size(); j++)
    {
      if(pilotList.at(j)->getPID() == temp)
      {
        cout << "Type: " << pilotList.at(j)->getType() << endl;
        cout << "Rate: " << pilotList.at(j)->getRate() << endl;
        cout << "Hours: " << pilotList.at(j)->getHour() << endl;
      }
    }

    for(int z = 0; z < coList.size(); z++)
    {
      if(coList.at(z)->getCID() == temp)
      {
        cout << "Type: " << coList.at(z)->getTypec() << endl;
        cout << "Rate: " << coList.at(z)->getRatec() << endl;
        cout << "Hours: " << coList.at(z)->getHourc() << endl;
      }
    }

    for(int p = 0; p < cabList.size(); p++)
    {
      if(cabList.at(p)->getCabid() == temp)
      {
        cout << "Type: " << cabList.at(p)->getTypecrew() << endl;
        cout << "Position: " << cabList.at(p)->getP() << endl;
      }
    }

    cout << endl;
  }



}

void crews::searchCrew()
{
  string currId;
  cout << "Enter the ID number of the crew member you would like to search for: ";            //function needed to search for the user entered crew member ID and then print the info for them
  cin >> currId;

  for(int i = 0; i < crewList.size(); ++i)
  {
    if(currId == crewList.at(i)->getId())
    {
      cout << "Name: " << crewList.at(i)->getName() << endl;
      cout << "ID: " << crewList.at(i)->getId() << endl;

      if(crewList.at(i)->getStatus() == 1)
      {
        cout << "Status: Available" << endl;
      }
      else if(crewList.at(i)->getStatus() == 2)
      {
        cout << "Status: On leave" << endl;
      }
      else
      {
        cout << "Status: Sick" << endl;
      }

      for(int j = 0; j < pilotList.size(); j++)
      {
        if(pilotList.at(j)->getPID() == currId)
        {
          cout << "Type: " << pilotList.at(j)->getType() << endl;
          cout << "Rate: " << pilotList.at(j)->getRate() << endl;
          cout << "Hours: " << pilotList.at(j)->getHour() << endl;
        }
      }

      for(int z = 0; z < coList.size(); z++)
      {
        if(coList.at(z)->getCID() == currId)
        {
          cout << "Type: " << coList.at(z)->getTypec() << endl;
          cout << "Rate: " << coList.at(z)->getRatec() << endl;
          cout << "Hours: " << coList.at(z)->getHourc() << endl;
        }
      }

      for(int p = 0; p < cabList.size(); p++)
      {
        if(cabList.at(p)->getCabid() == currId)
        {
          cout << "Type: " << cabList.at(p)->getTypecrew() << endl;
          cout << "Position: " << cabList.at(p)->getP() << endl;
        }
      }
    }
  }
}
