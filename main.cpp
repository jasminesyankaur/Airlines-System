#include<iostream>
#include "flights.h"

using namespace std;

int main ()
{
	int choice;
	planes allPlanes;
	crews allCrews;
	flights allFlights;


	cout << "-----------------------------------------------------------------------------------------------" << endl;
	cout << "			Name: Jasmine Kaur      Class: CSCE 1040" << endl;
	cout << "				Email: Jasminekaur@my.unt.edu" << endl;
	cout << "Description: This program will stimulate an airlines application named the Mean Green Airlines." << endl;
	cout << "-----------------------------------------------------------------------------------------------" << endl;
	cout << endl << endl;

	do
	{
		cout << "--------------------------------------------------------------------------------------------" << endl;
		cout << "                   Menu Options" << endl;
		cout << "1 - Add a new airplane" << endl;
		cout << "2 - Add a new crew member" << endl;
		cout << "3 - Create a flight" << endl;
		cout << "4 - Print list of planes" << endl;
		cout << "5 - Edit a plane" << endl;
		cout << "6 - Delete a plane" << endl;
		cout << "7 - Print a list of crew members" << endl;
		cout << "8 - Edit a crew member" << endl;
		cout << "9 - Delete a crew member" << endl;
		cout << "10 - Print a list of flights" << endl;
		cout << "11 - Edit a flight" << endl;
		cout << "12 - Delete a flight" << endl;
		cout << "13 - Search for a plane" << endl;
		cout << "14 - Search for a crew member" << endl;
		cout << "15 - Search for a flight" << endl;
		cout << "17 - Exit" << endl;
		cout << "--------------------------------------------------------------------------------------------" << endl;
		cout << endl << "Enter a number from the menu above: " << endl;

		cin >> choice;
		cout << endl;

		switch(choice)
		{
			case 1:
				allPlanes.addPlane();
				break;
			case 2:
				allCrews.addCrew();
				break;
			case 3:
				allFlights.addFlight(allPlanes, allCrews);
				break;
			case 4:
				allPlanes.printPlane();
				break;
			case 5:
				allPlanes.editPlane();
				break;
			case 6:
				allPlanes.deletePlane();
				break;
			case 7:
				allCrews.printCrew();
				break;
			case 8:
				allCrews.editCrew();
				break;
			case 9:
				allCrews.deleteCrew();
				break;
			case 10:
				allFlights.printFlight(allPlanes, allCrews);
				break;
			case 11:
				allFlights.editFlight();
				break;
			case 12:
				allFlights.deleteFlight();
				break;
			case 13:
				allPlanes.searchPlane();
				break;
			case 14:
				allCrews.searchCrew();
				break;
			case 15:
				allFlights.searchFlight();
				break;
			case 17:
				cout << "Thank you for using this program!" << endl;
				break;
			default:
				cout << "You have entered an invalid option, please enter another number from the menu option and try again." << endl;
		}

	cout << endl;

}while(choice != 17);
















return 0;
}
