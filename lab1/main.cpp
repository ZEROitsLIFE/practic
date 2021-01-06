#include <iostream>

#include "train.h"


using namespace std;

int main()
{
    setlocale(LC_CTYPE,"ukr");
    Train a;
    Train b(1,"Тернопіль",1,16,40,12,20,10);
    Train d(b);

    Train object1, object2, object3;
    cin >> object1 >> object2 >> object3;
    return 0;
}
