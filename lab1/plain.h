#ifndef PLAIN_H
#define PLAIN_H

#include <string>

#include "transport.h"

using namespace std;

class Plain : public transport
{
private:
    int number_train;                   //Номер поїзду

public:
    Plain();
    Plain(int _number_train); //Параметризований конструктор
    Plain(const Plain &obj);                                                                                    //Конструктор копіювання
    ~Plain();
    friend istream& operator>> (istream& is, Plain& obj);
    friend ostream& operator<<(ostream& os, const Plain& obj);
    void set() override;
    void get() const override;

};

#endif // PLAIN_H
