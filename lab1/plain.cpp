#include "plain.h"

#include <iostream>

Plain::Plain()
{

    number_train=0;

}

Plain::Plain( int _number_train)
{

    number_train=_number_train;

}

Plain::Plain(const Plain &obj)
{

    number_train=obj.number_train;

}

Plain::~Plain()
{

}

ostream &operator<<(ostream &os, const Plain &obj)
{

   obj.get();
    os<<"Train number="<<obj.number_train;
    cout<<endl;
    cout<<endl<<endl;

    return os;
}

istream &operator>>(istream &is, Plain &obj)
{
    obj.set();
    cout<<"Plain number=";
    is>>obj.number_train;

       cout<<endl;
          cout<<endl;


    return is;
}
