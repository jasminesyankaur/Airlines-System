#include<string>

using namespace std;

class crew
{
private:
  string name;
  string id;                                                                  //variables for a crew member - parent class
  int statusc;
public:
  void setName(string crewName);
  string getName();
  void setId(string crewId);
  string getId();
  void setStatus(int Statusc);
  int getStatus();
};

class pilot : public crew                                                 //Here we have our sub/child class each with their own set/get functions associated with their position
{
  private:
    string prate;
    string phours;
    string pilot;
    string pID;
  public:
    void setPID(string iden);
    string getPID();

    void setType(string type);
    string getType();

    void setRate(string rate);
    string getRate();

    void setHours(string hour);
    string getHour();
};

class coPilot : public crew
{
  private:
    string crate;
    string chours;
    string co;
    string ident;

  public:
    void setCID(string cid);
    string getCID();

    void setTypec(string typec);
    string getTypec();

    void setRatec(string rt);
    string getRatec();

    void setHourc(string h);
    string getHourc();
};

class cabinCrew : public crew
{
  private:
    string position;
    string cabin;
    string identi;

  public:
    void setCabid(string cab);
    string getCabid();

    void setTypecrew(string cc);
    string getTypecrew();

    void setPosition(string num);
    string getP();
};
