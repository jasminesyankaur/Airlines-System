#include "plane.h"

using namespace std;
                                                                                                                          //Set and get functions to create a plane
void plane::setMake(string planeMake)
{
        make = planeMake;
}

string plane::getMake()
{
        return make;
}

void plane::setModel(int planeModel)
{
        model = planeModel;
}

int plane::getModel()
{
        return model;
}

void plane::setTailnumber(string planeTailnumber)
{
	tailnumber = planeTailnumber;
}

string plane::getTailnumber()
{
	return tailnumber;
}

void plane::setSeats(int planeSeats)
{
	seats = planeSeats;
}

int plane::getSeats()
{
	return seats;
}

void plane::setRange(string planeRange)
{
	range = planeRange;
}

string plane::getRange()
{
	return range;
}

void plane::setCabcrew(int planeCabcrew)
{
	cabcrew = planeCabcrew;
}

int plane::getCabcrew()
{
	return cabcrew;
}
