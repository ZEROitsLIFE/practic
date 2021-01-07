#include <iostream>

#include "train.h"
#include "plain.h"


using namespace std;

int main()
{
//    cout<<"Base class\n";
//    transport k;
//    k.set();
//    k.get();
//    setlocale(LC_CTYPE,"ukr");
//    cout<<"Train class\n";

//    Train a;
//    cin>>a;
//    cout<<a;
    //    Train b(1,12,20,10);
    //    Train d(b);

    //    Train object1, object2, object3;
    //    cin >> object1 >> object2 >> object3;
    //    cout<<object1 << object2 << object3;

    //    cout<<"check object1 and object2\n";
    //    object1== object2;
//    cout<<"Plain class\n";

//    Plain c;
//    cin>>c;
//    cout<<c;

    int n=3;
        transport *arr[n];
        int i=0;
        while(i<n)
        {
            char a;
            cout<<"What create\t";
            cout<<"Cteate class Base Enter B or b\nCreate class Plain Enter P or p\nCreate class Train Enter T or t\n";
            cin>>a;
            if(a=='p'||a=='P') {arr[i]=new Plain();
                arr[i]->set();};
            if(a=='T'||a=='t') {arr[i]=new Train();
                arr[i]->set();};
            if(a=='B'||a=='b') {arr[i]=new transport();
                arr[i]->set();};
            i++;
        }
        i=0;
        while(i<n)
        {
            cout<<"--------------------------------------------------------------------------------------------\n";
            arr[i]->get();
            i++;
            cout<<"\n--------------------------------------------------------------------------------------------\n";
        }
    return 0;
}
