#include "train.h"
#include <iostream>

using namespace std;


Train::Train()
{
    number_train=0;

    number_all=kupe=seatcard=luxe=0;
}

Train::Train( int _number_train, int _kupe, int _seatcard, int _luxe)
{

    number_train=_number_train;

    kupe=_kupe;
    seatcard=_seatcard;
    luxe=_luxe;
}

Train::Train(const Train &obj)
{
//    destination=obj.destination;
    number_train=obj.number_train;
//    hour=obj.hour;
//    minut=obj.minut;
    kupe=obj.kupe;
    seatcard=obj.seatcard;
    luxe=obj.luxe;
}

Train::~Train()
{

}

Train &Train::operator==(const Train &obj)
{
    /*if(destination==obj.destination)cout<<"Destination identical\n";
    else cout<<"Destination not identical\n";

    if( number_train==obj.number_train)cout<<"number_train identical\n";
    else cout<<"number_train not identical\n";

    if( hour==obj.hour||minut==obj.minut)cout<<"Time identical\n";
    else cout<<"Time not identical\n";*/

    if( number_all==obj.number_all)
    {
        if(kupe==obj.kupe)cout<<"kupe identical\n";
        else cout<<"kupe not identical\n";

        if(seatcard==obj.seatcard)cout<<"seatcard identical\n";
        else cout<<"seatcard not identical\n";

        if(luxe==obj.luxe)cout<<"luxe identical\n";
        else cout<<"luxe not identical\n";

    }
    else cout<<"Place not identical\n";
}



ostream &operator<<(ostream &os, const Train &obj)
{


    obj.get();
    os<<"Train number="<<obj.number_train;
    cout<<endl;
    os<<"Seats compartment="<<obj.kupe;
    cout<<endl;
    os<<"Seats seat="<<obj.seatcard;
    cout<<endl;
    os<<"Seats luxe="<<obj.luxe;
    cout<<endl;
    os<<"Total number of seats="<<obj.number_all;

    cout<<endl<<endl;
    return os;

}

istream &operator>>(istream &is, Train &obj)
{
    obj.set();
    cout<<"Train number=";
    is>>obj.number_train;
    cout<<"Enter the sending time:\n";
    cout<<"Seats compartment=";
    is>>obj.kupe;
    cout<<"Seats seat=";
    is>>obj.seatcard;
    cout<<"Seats luxe=";
    is>>obj.luxe;
    obj.number_all=obj.kupe+obj.seatcard+obj.luxe;
    cout<<endl<<endl;

    return is;



}
