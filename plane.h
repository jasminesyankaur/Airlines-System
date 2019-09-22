#include<string>

using namespace std;

class plane
{
	private:
		string make;
		int model;
		string tailnumber;		//variables for plane
		int seats;
		string range;
		int cabcrew;
	public:
		void setMake(string planeMake);
		string getMake();
		void setModel(int planeModel);
		int getModel();
		void setTailnumber(string planeTailnumber);			//set/get functions for a plane
		string getTailnumber();
		void setSeats(int planeSeats);
		int getSeats();
		void setRange(string planeRange);
		string getRange();
		void setCabcrew(int planeCabcrew);
		int getCabcrew();
};
