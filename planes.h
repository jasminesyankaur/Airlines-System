#include<string>
#include<vector>
#include "plane.h"

using namespace std;

class planes
{
	public:
	  vector<plane*> planeList;						//vector to hold user entered planes
		void addPlane();										//functions needed to add a plame, edit a plane, delete a plane, print a plane and search for a plane
		void editPlane();
		void deletePlane();
		void printPlane();
		void searchPlane();
};
