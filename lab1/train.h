#ifndef TRAIN_H
#define TRAIN_H
#include <string>

#include "transport.h"

using namespace std;
class Train : public transport
{
private:

    int number_train;                   //Номер поїзду
    int kupe,seatcard,luxe;             //Місця в поїзді
    int number_all=kupe+seatcard+luxe;
public:
    Train();                                                                                                    //Конструктор за замовчуванням
    Train(int _number_train, int _kupe, int _seatcard, int _luxe); //Параметризований конструктор
    Train(const Train &obj);                                                                                    //Конструктор копіювання
    ~Train();
    friend istream& operator>> (istream& is, Train& obj);
    friend ostream& operator<<(ostream& os, const Train& obj);
    Train &operator==(const Train&obj);
    void set() override;
    void get() const override;


};

#endif // TRAIN_H
