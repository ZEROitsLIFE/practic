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

Train &Train::operator==(const Train &obj)
{
    if(destination==obj.destination)cout<<"Destination identical\n";
    else cout<<"Destination not identical\n";

    if( number_train==obj.number_train)cout<<"number_train identical\n";
    else cout<<"number_train not identical\n";

    if( hour==obj.hour||minut==obj.minut)cout<<"Time identical\n";
    else cout<<"Time not identical\n";

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

    os<<"ID="<<obj.id;
    cout<<endl;
    os<<"Місце призначення="<<obj.destination;
    cout<<endl;
    os<<"Номер поїзда="<<obj.number_train;
    cout<<endl;
    cout<<"Час відправки:\n";
    os<<obj.hour<<":"<<obj.minut;;
    cout<<endl;
    os<<"Місць купе="<<obj.kupe;
    cout<<endl;
    os<<"Місць плацкард="<<obj.seatcard;
    cout<<endl;
    os<<"Місць люкс="<<obj.luxe;
    cout<<endl;
    os<<"Загальна кілткість місць="<<obj.number_all;

    cout<<endl<<endl;
    return os;

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
    obj.number_all=obj.kupe+obj.seatcard+obj.luxe;
    cout<<endl<<endl;

    return is;



}
