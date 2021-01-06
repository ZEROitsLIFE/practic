#include "train.h"
#include <iostream>

using namespace std;


Train::Train()
{
    destination="";
    number_train=0;
    hour=minut=0;
    number_all=kupe=seatcard=luxe=0;
}

Train::Train(int _id,string _destination, int _number_train, int _hour, int _minut, int _kupe, int _seatcard, int _luxe)
{
    id=_id;
    destination=_destination;
    number_train=_number_train;
    hour=_hour;
    minut=_minut;
    kupe=_kupe;
    seatcard=_seatcard;
    luxe=_luxe;
}

Train::Train(const Train &obj)
{
    destination=obj.destination;
    number_train=obj.number_train;
    hour=obj.hour;
    minut=obj.minut;
    kupe=obj.kupe;
    seatcard=obj.seatcard;
    luxe=obj.luxe;
}

Train::~Train()
{

}

istream &operator>>(istream &is, Train &obj)
{
    cout<<"ID=";
    is>>obj.id;
    cout<<"Місце призначення=";
    is>>obj.destination;
    cout<<"Номер поїзда=";
    is>>obj.number_train;
    cout<<"Введіть час відправки:\n";
    cout<<"Година відправки=";
    is>>obj.hour;
    cout<<"Хвилина відправки=";
    is>>obj.minut;
    cout<<"Місць купе=";
    is>>obj.kupe;
    cout<<"Місць плацкард=";
    is>>obj.seatcard;
    cout<<"Місць люкс=";
    is>>obj.luxe;


    return is;



}
