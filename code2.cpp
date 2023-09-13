//Take element input in array and print their double

#include<iostream>
using namespace std;

int main (){
    int arr[500];
    int n;
    cout << "Give how many elemets you want to insert" << endl;
    cin >> n;
    cout << "Give input to the array "<< endl;
    for (int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }

    cout << "Output is:" << endl;

    for (int i = 0 ; i < n ; i++){
        cout << 2*arr[i]<< endl;
    }
    return 0; 
}