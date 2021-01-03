#include <iostream>

#include "train.h"


using namespace std;

int main()
{
    Train a;
    Train b("Тернопіль",1,16,40,12,20,10);
    Train d(b);

    return 0;
}
