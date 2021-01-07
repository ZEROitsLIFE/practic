#ifndef TRANSPORT_H
#define TRANSPORT_H
#include <string>


using namespace std;

class transport
{
private:
    int id;
    string destination;
    int hour,minut;
public:
    transport();
    ~transport();
   virtual void set();
   virtual void get()const;
};

#endif // TRANSPORT_H
