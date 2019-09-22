#include<iostream>
#include "flights.h"

using namespace std;

void flights::addFlight(planes& allPlanes, crews& allCrews)
{
  flight* flightptr = new flight;                             //all the temporary varibles needed to add a flight
  string tempTailnum;
  string planesid;
  int currnumpilots;
  crew* pilotptr = new crew;
  crew* cmptr = new crew;
  int currnumCabcrew;
  string currstartDT;
  string currendDT;
  string currstartAircode;
  string currendAircode;
  int currnumPassengers;
  int currstatus;
  string tempPilotId;
  string tempcmid;

  cin.ignore();
  cout << "Enter the plane's tailnumber: ";                       //start by asking the user for the planes tail number and then running through the planes  vector to see if it exists
  getline(cin, tempTailnum);

  for(int i = 0; i < allPlanes.planeList.size(); ++i)
  {
    if(tempTailnum == allPlanes.planeList.at(i)->getTailnumber())
    {
      planesid = tempTailnum;                                         //if so then will set to plane id

      cout << "Enter the number of passengers: ";
      cin >> currnumPassengers;                                       //asking the user for the number of passengers on the flight



      for(int i = 0; i < allPlanes.planeList.size(); i++)                         //run through the planes vector to make sure the plane has enough seats
      {
        if(currnumPassengers <= allPlanes.planeList.at(i)->getSeats())
        {
            flightptr->setNumpassengers(currnumPassengers);




            cout << "Enter the number of pilots necessary: ";                         //asking the user for the number of pilots needed, then asking for the pilot IDs, of the ID exists adding worker to pilot vector
            cin >> currnumpilots;

          /*  for(int i = 0; i < currnumpilots; i++)
            {
                cout << "Enter the pilot's ID: ";
                cin.ignore();
                getline(cin, tempPilotId);

                  for(int i = 0; i < allCrews.crewList.size(); ++i)
                  {
                    if(tempPilotId == allCrews.crewList.at(i)->getId())
                    {
                        pilotptr->setpilotID(tempPilotId);
                        pioltIDlist.push_back(pilotptr);

                        cout << "Pilot's ID: " << pioltIDlist.at(i)->getpilotID() << endl;

                    }
                  }
          }
*/


            cout << "Enter the number of cabin crew member necessary: ";            //asking the user for the number of members needed, then asking for the member IDs, of the ID exists adding worker to member vector
            cin >> currnumCabcrew;

  /*          for(int i = 0; i < currnumpilots; i++)
            {
              cout << "Enter the crew member's ID: ";
              cin.ignore();
              getline(cin, tempcmid);

              for(int i = 0; i < allCrews.crewList.size(); i++)
              {
                  if(tempcmid == allCrews.crewList.at(i)->getId())
                  {
                    cmptr->setcmID(tempcmid);
                    crewIDlist.push_back(cmptr);
                  }
                }
              }
*/


            cin.ignore();
            cout << "Enter the start date and time (MM/DD/YY, 00:00am/pm): ";                   //asking user for date, time, airport codes and status of flight
            getline(cin, currstartDT);

            cout << "Enter the end date and time (MM/DD/YY, 00:00am/pm): ";
            getline(cin, currendDT);

            cout << "Enter the starting airport code: ";
            getline(cin, currstartAircode);

            cout << "Enter the ending airport code: ";
            getline(cin, currendAircode);

            cout << "Flight status - Enter 1 if active, 2 if complete or 3 if cancelled: ";
            cin >> currstatus;
              if((currstatus == 1)||(currstatus == 2)||(currstatus == 3))
              {
                flightptr->setStatus(currstatus);
              }
              else
              {
                cout << "Invalid entery." << endl;
              }

              flightptr->setFlightId(planesid);
              flightptr->setNumpilots(currnumpilots);
              flightptr->setNumcrew(currnumCabcrew);                    //setting the temp varibles to the pointer
              flightptr->setStartDT(currstartDT);
              flightptr->setEndDT(currendDT);
              flightptr->setStartcode(currstartAircode);
              flightptr->setEndcode(currendAircode);
              flightList.push_back(flightptr);                //sending the pointer to the vector to store
        }
        else
        {
          cout << "This plane does not have a sufficient number of seats for the passengers." << endl;
        }
      }
    }
    else
    {
      cout << "Invalid plane tail number entery." << endl;
    }
  }
}

void flights::editFlight()
  {
    int edit;
    string currTailnum;
    int currnumpilots;
    int currnumCabcrew;
    string currstartDT;                             //temporary varibles needed to edit a flight
    string currendDT;
    string currstartAircode;
    string currendAircode;
    int currnumPassengers;
    int currstatus;

    cout << "Enter the plane's tailnumber of the flight you would like to edit: ";
    cin >> currTailnum;                                                                 //asking user for the plane tailnumber associated with flight

    for(int i = 0; i < flightList.size(); ++i)
    {
      if(currTailnum == flightList.at(i)->getFlightId())
      {
        cout << "Enter the number corresponding to what you would like to edit: " << endl;
        cout << "1 to edit the number of pilots" << endl;
        cout << "2 to edit the number of cabin crew members" << endl;
        cout << "3 to edit the start date and time" << endl;
        cout << "4 to edit the end date and time" << endl;
        cout << "5 to edit the starting airport code" << endl;                              //menu option for user to pick what they need to edit
        cout << "6 to edit the ending airport code" << endl;
        cout << "7 to edit the number of passengers" << endl;
        cout << "8 to edit the status of the flight" << endl;
        cin >> edit;

        if(edit == 1)
        {
          cout << "Enter a new number of pilots: ";
          cin >> currnumpilots;

          flightList.at(i)->setNumpilots(currnumpilots);
        }
        else if (edit == 2)
        {
          cout << "Enter a new number of cabin crew members: ";
          cin >> currnumCabcrew;

          flightList.at(i)->setNumcrew(currnumCabcrew);
        }
        else if(edit == 3)
        {
          cout << "Enter a new start date and time: ";                      //using the set functions to save the newly edited flight
          getline(cin, currstartDT);

          flightList.at(i)->setStartDT(currstartDT);
        }
        else if(edit == 4)
        {
          cout << "Enter a new end date and time: ";
          getline(cin, currendDT);

          flightList.at(i)->setEndDT(currendDT);
        }
        else if(edit == 5)
        {
          cout << "Enter a new starting airport code: ";
          cin >> currstartAircode;

          flightList.at(i)->setStartcode(currstartAircode);
        }
        else if(edit == 6)
        {
          cout << "Enter a new ending airport code: ";
          cin >> currendAircode;

          flightList.at(i)->setEndcode(currendAircode);
        }
        else if(edit == 7)
        {
          cout << "Enter a new number of passengers: ";
          cin >> currnumPassengers;

          flightList.at(i)->setNumpassengers(currnumPassengers);
        }
        else if(edit == 8)
        {
          cout << "Enter a new flight status - Enter 1 if active, 2 if complete or 3 if cancelled: ";
          cin >> currstatus;
          if((currstatus == 1)||(currstatus == 2)||(currstatus == 3))
          {
            flightList.at(i)->setStatus(currstatus);
          }
          else
          {
            cout << "Invalid entery." << endl;
          }
        }
      }
    }
  }

void flights::deleteFlight()
  {
    string tempTailnum;
    unsigned int i;

    cout << "Enter the tail number of the flight you would like to delete: ";
    cin >> tempTailnum;

    for(i = 0; i < flightList.size(); ++i)                                          //function needed to delete a flight
    {
      if(tempTailnum == flightList.at(i)->getFlightId())
      {
        flightList.erase(flightList.begin()+i);
      }
    }
  }

void flights::printFlight(planes& allPlanes, crews& allCrews)
{
  unsigned int i;

  cout <<  pioltIDlist.size() << endl;



  for(i = 0; i < flightList.size(); i++)
  {
    cout << "Flight " << i+1 << endl;
    cout << "Flight ID: " << flightList.at(i)->getFlightId() << endl;
		cout << "Number of pilots: " << flightList.at(i)->getNumpilots() << endl;                         //function needed to print the flights

  /*  for(i = 0; i < pioltIDlist.size(); i++)
    {
      cout << "Pilot " << i+1 << endl;
      cout << "Pilot's ID: " << pioltIDlist.at(i)->getpilotID() << endl;
      for(int i = 0; i < allCrews.crewList.size(); ++i)
      {
        if(pioltIDlist.at(i)->getpilotID() == allCrews.crewList.at(i)->getId())
        {
          cout << "Pilot's Name: " << allCrews.crewList.at(i)->getName() << endl;
        }                                                                                       //trying to print names with members
      }
    }

    for(i = 0; i < crewIDlist.size(); i++)
    {
      cout << "Crew Member " << i + 1 << endl;
      cout << "Crew Member's ID: " << crewIDlist.at(i)->getcmID() << endl;
      for(int i = 0; i < allCrews.crewList.size(); ++i)
      {
        if(crewIDlist.at(i)->getcmID() == allCrews.crewList.at(i)->getId())
        {
          cout << "Crew Member's Name: " << allCrews.crewList.at(i)->getName() << endl;
        }
      }
    }*/
		cout << "Number of cabin crew: " << flightList.at(i)->getNumcrew() << endl;
		cout << "Start Date and Time: " << flightList.at(i)->getStartDT() << endl;
		cout << "End Date and Time: " << flightList.at(i)->getEndDT() << endl;
		cout << "Starting airport code: " << flightList.at(i)->getStartcode() << endl;
    cout << "Ending airport code: " << flightList.at(i)->getEndcode() << endl;
    cout << "Number of passengers: " << flightList.at(i)->getNumpassengers() << endl;
    if(flightList.at(i)->getStatus() == 1)
    {
      cout << "Flight Status: Active" << endl;
    }
    else if(flightList.at(i)->getStatus() == 2)
    {
      cout << "Flight Status: Complete" << endl;
    }
    else if(flightList.at(i)->getStatus() == 3)
    {
      cout << "Flight Status: Cancelled" << endl;
    }
    else
    {
      cout << "Invalid Entry." << endl;
    }
    cout << endl;
  }
}

void flights::searchFlight()
{
  string currTailnum;
  cout << "Enter the plane's tailnumber of the flight you would like to search for: ";
  cin >> currTailnum;

  for(int i = 0; i < flightList.size(); ++i)
  {
    if(currTailnum == flightList.at(i)->getFlightId())
    {
      cout << "Number of pilots: " << flightList.at(i)->getNumpilots() << endl;
      cout << "Number of cabin crew: " << flightList.at(i)->getNumcrew() << endl;
      cout << "Start Date and Time: " << flightList.at(i)->getStartDT() << endl;                          //function needed to search for users flight and print
      cout << "End Date and Time: " << flightList.at(i)->getEndDT() << endl;
      cout << "Starting airport code: " << flightList.at(i)->getStartcode() << endl;
      cout << "Ending airport code: " << flightList.at(i)->getEndcode() << endl;
      cout << "Number of passengers: " << flightList.at(i)->getNumpassengers() << endl;
      if(flightList.at(i)->getStatus() == 1)
      {
        cout << "Flight Status: Active" << endl;
      }
      else if(flightList.at(i)->getStatus() == 2)
      {
        cout << "Flight Status: Complete" << endl;
      }
      else
      {
        cout << "Flight Status: Cancelled" << endl;
      }
    }
  }
}
