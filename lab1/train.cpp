#include "train.h"

Train::Train()
{
    destination=nullptr;
    number_train=0;
    hour=minut=0;
    number_all=kupe=seatcard=luxe=0;
}

Train::Train(string _destination, int _number_train, int _hour, int _minut, int _kupe, int _seatcard, int _luxe)
{
    destination=_destination;
    number_train=_number_train;
    hour=_hour;
    minut=_minut;
    kupe=_kupe;
    seatcard=_seatcard;
    luxe=_luxe;
    number_all=kupe+seatcard+luxe;
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
