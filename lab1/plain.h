#ifndef PLAIN_H
#define PLAIN_H

#include <string>

using namespace std;

class Plain
{
private:
    int id;
    string destination;                 //Пункт призначення
    int number_train;                   //Номер поїзду
    int hour,minut;                     //Час відправки
public:
    Plain();
    Plain(int _id, string _destination, int _number_train, int _hour, int _minut); //Параметризований конструктор
    Plain(const Plain &obj);                                                                                    //Конструктор копіювання
    ~Plain();
    friend istream& operator>> (istream& is, Plain& obj);
    friend ostream& operator<<(ostream& os, const Plain& obj);

};

#endif // PLAIN_H
