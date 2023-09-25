#include<iostream>
using namespace std;
int main () {
    int a =10;
    int b =20;
    int c = a + b;
    cout << c << endl;
    if(cout << a << endl){//treated as true
        cout <<"A a" <<endl;
    }
    if(cin >> a){//treated as false
        cout <<"A" << endl;
    }
    return 0;
}