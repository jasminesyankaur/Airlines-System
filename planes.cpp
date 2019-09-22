#include<iostream>
#include<string>																												//needed directories
#include<vector>
#include "planes.h"

void planes::addPlane()
{
	plane* planeptr = new plane;
	string currMake;
	int currModel;
	string currTailnum;																									//temporary varibles needed to send to the pointer and then to the vector
	int currSeats;
	string currRange;
	int currCabcrew;

  cin.ignore();
	cout << "Enter plane's make: ";
  cin >> currMake;

	cout << "Enter plane's model: ";
	cin >> currModel;
	cin.ignore();

	cout << "Enter plane's tail number: ";
  getline(cin, currTailnum);

	cout << "Enter plane's seats: ";
  cin >> currSeats;
  cin.ignore();

	cout << "Enter plane's range: ";
  getline(cin, currRange);

	cout << "Enter plane's minimum number of cabin crew members: ";
  cin >> currCabcrew;
  cin.ignore();

	planeptr->setMake(currMake);
	planeptr->setModel(currModel);
	planeptr->setTailnumber(currTailnum);																						//setting the user entered info in a dynamic pointer
	planeptr->setSeats(currSeats);
	planeptr->setRange(currRange);
	planeptr->setCabcrew(currCabcrew);
	planeList.push_back(planeptr);																									//storing in vector
}

  void planes::editPlane()
  {
    string tempTailnum;
    int edit;
  	int currModel;																															//temporary varibles needed to edit a plane
  	int currSeats;
  	string currRange;
  	int currCabcrew;

    cout << "Enter the tail number of the plane you would like to edit: ";
    cin >> tempTailnum;																													//asking user for plane's id and then using a for loop to run through the vector and find the plane

    for(int i = 0; i < planeList.size(); ++i)
    {
      if(tempTailnum == planeList.at(i)->getTailnumber())
      {
        cout << "Enter 1 to edit make, 2 to edit model, 3 to edit seat number, 4 to edit range or 5 to edit number of cabin crew members: ";						//asking user what they want to edit and then using the set function to save edit
        cin >> edit;
        if(edit == 1)
        {
          string tempMake;
          cout << "Enter a new make: ";
          cin  >> tempMake;

          planeList.at(i)->setMake(tempMake);
        }
        else if(edit == 2)
        {
          cout << "Enter a new model: ";
        	cin >> currModel;
        	cin.ignore();

          planeList.at(i)->setModel(currModel);
        }
        else if(edit == 3)
        {
          cout << "Enter a new number of seats: ";
          cin >> currSeats;
          cin.ignore();

          planeList.at(i)->setSeats(currSeats);
        }
        else if(edit == 4)
        {
          cin.ignore();
          cout << "Enter a new range: ";
          getline(cin, currRange);

          planeList.at(i)->setRange(currRange);
        }
        else if(edit == 5)
        {
          cout << "Enter a new number of cabin crew members: ";
          cin >> currCabcrew;
          cin.ignore();

          planeList.at(i)->setCabcrew(currCabcrew);
        }
        else
        {
          cout << "Invalid entery." << endl;
        }
      }
			else
			{
				cout << "Invalid entery." << endl;
			}
    }
  }

void planes::deletePlane()
{
  string tempTailnum;
  unsigned int i;

  cout << "Enter the tail number of the plane you would like to delete: ";
  cin >> tempTailnum;

  for(i = 0; i < planeList.size(); ++i)																										//function that will delete a plane that the user no longer wants
  {
    if(tempTailnum == planeList.at(i)->getTailnumber())
    {
      planeList.erase(planeList.begin()+i);
    }

  }

}

void planes::printPlane()
{
	unsigned int i;

	for(i = 0; i < planeList.size(); i++)
	{
		cout << "Plane " << i+1 << endl;
		cout << "Make: " << planeList.at(i)->getMake() << endl;
		cout << "Model: " << planeList.at(i)->getModel() << endl;
		cout << "Tailnumber: " << planeList.at(i)->getTailnumber() << endl;							//function that will print the planes
		cout << "Seats: " << planeList.at(i)->getSeats() << endl;
		cout << "Range: " << planeList.at(i)->getRange() << endl;
		cout << "Number of cabin crew members: " << planeList.at(i)->getCabcrew() << endl;
		cout << endl;
	}
}

void planes::searchPlane()
{
	string tempTailnum;

	cout << "Enter the tail number of the plane you would like to search for: ";
	cin >> tempTailnum;																																//function that will find the plane  the user wants and then print the info for it

	for(int i = 0; i < planeList.size(); ++i)
	{
		if(tempTailnum == planeList.at(i)->getTailnumber())
		{
			cout << "Make: " << planeList.at(i)->getMake() << endl;
			cout << "Model: " << planeList.at(i)->getModel() << endl;
			cout << "Tailnumber: " << planeList.at(i)->getTailnumber() << endl;
			cout << "Seats: " << planeList.at(i)->getSeats() << endl;
			cout << "Range: " << planeList.at(i)->getRange() << endl;
			cout << "Number of cabin crew members: " << planeList.at(i)->getCabcrew() << endl;
			cout << endl;
		}
	}
}
