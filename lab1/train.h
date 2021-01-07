#ifndef TRAIN_H
#define TRAIN_H
#include <string>


using namespace std;
class Train
{
private:

    int id;
    string destination;                 //Пункт призначення
    int number_train;                   //Номер поїзду
    int hour,minut;                     //Час відправки
    int kupe,seatcard,luxe;             //Місця в поїзді
    int number_all=kupe+seatcard+luxe;
public:
    Train();                                                                                                    //Конструктор за замовчуванням
    Train(int id,string _destination,int _number_train,int _hour,int _minut,int _kupe,int _seatcard,int _luxe); //Параметризований конструктор
    Train(const Train &obj);                                                                                    //Конструктор копіювання
    ~Train();
    friend istream& operator>> (istream& is, Train& obj);
    friend ostream& operator<<(ostream& os, const Train& obj);
    Train &operator==(const Train&obj);


};

#endif // TRAIN_H
