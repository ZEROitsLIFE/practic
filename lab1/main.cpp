#include <iostream>

#include "train.h"
#include "plain.h"


using namespace std;

int main()
{
    setlocale(LC_CTYPE,"ukr");
    Train a;
    Train b(1,"Тернопіль",1,16,40,12,20,10);
    Train d(b);

    //    Train object1, object2, object3;
    //    cin >> object1 >> object2 >> object3;
    //    cout<<object1 << object2 << object3;

    //    cout<<"check object1 and object2\n";
    //    object1== object2;

    Plain c;
    cin>>c;
    cout<<c;
    return 0;
}
