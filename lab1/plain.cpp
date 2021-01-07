#include "plain.h"

#include <iostream>

Plain::Plain()
{
    destination="";
    number_train=0;
    hour=minut=0;
}

Plain::Plain(int _id, string _destination, int _number_train, int _hour, int _minut)
{
    id=_id;
    destination=_destination;
    number_train=_number_train;
    hour=_hour;
    minut=_minut;
}

Plain::Plain(const Plain &obj)
{
    destination=obj.destination;
    number_train=obj.number_train;
    hour=obj.hour;
    minut=obj.minut;
}

Plain::~Plain()
{

}

ostream &operator<<(ostream &os, const Plain &obj)
{
    os<<"ID="<<obj.id;
    cout<<endl;
    os<<"Destination="<<obj.destination;
    cout<<endl;
    os<<"Train number="<<obj.number_train;
    cout<<endl;
    cout<<"Shipping time:\n";
    os<<obj.hour<<":"<<obj.minut;;
    cout<<endl;
       cout<<endl;

    return os;
}

istream &operator>>(istream &is, Plain &obj)
{
    cout<<"ID=";
    is>>obj.id;
    cout<<"Destination=";
    is>>obj.destination;
    cout<<"Train number=";
    is>>obj.number_train;
    cout<<"Enter the sending time:\n";
    cout<<"Shipping time=";
    is>>obj.hour;
    cout<<"\Minute of sending=";
    is>>obj.minut;
       cout<<endl;
          cout<<endl;


    return is;
}
