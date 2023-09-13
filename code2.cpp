//Take 5 element input in array and print their double

#include<iostream>
using namespace std;

int main (){
    int arr[5];
    cout << "Give input to the array "<< endl;
    for (int i = 0 ; i < 5 ; i++){
        cin >> arr[i];
    }

    cout << "Output is:" << endl;

    for (int i = 0 ; i < 5 ; i++){
        cout << 2*arr[i]<< endl;
    }
    return 0; 
}