#include "transport.h"
#include "train.h"

#include <iostream>


transport::transport()
{

}

transport::~transport()
{
    destination="";
    hour=minut=0;
}

void transport::set()
{
    cout<<"ID=";
    cin>>id;
    cout<<"Destination=";
    cin>>destination;
    cout<<"Enter the sending time:\n";
    cout<<"Shipping time=";
    cin>>hour;
    cout<<"Minute of sending=";
    cin>>minut;

}

void transport::get() const
{
    cout<<"ID="<<id;
    cout<<endl;
    cout<<"Destination="<<destination;
    cout<<endl;
    cout<<"Shipping time:\n";
    cout<<hour<<":"<<minut;;
    cout<<endl;
}
