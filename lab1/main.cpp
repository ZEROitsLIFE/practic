#include <iostream>

#include "train.h"
#include "plain.h"


using namespace std;

int main()
{
    cout<<"Base class\n";
    transport k;
    k.set();
    k.get();
    setlocale(LC_CTYPE,"ukr");
    cout<<"Train class\n";

    Train a;
    cin>>a;
    cout<<a;
    //    Train b(1,12,20,10);
    //    Train d(b);

    //    Train object1, object2, object3;
    //    cin >> object1 >> object2 >> object3;
    //    cout<<object1 << object2 << object3;

    //    cout<<"check object1 and object2\n";
    //    object1== object2;
    cout<<"Plain class\n";

    Plain c;
    cin>>c;
    cout<<c;

    return 0;
}
