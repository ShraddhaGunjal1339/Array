//Change all values to 1 in given array
#include<iostream>
using namespace std;

int main (){

    int arr []={1,3,5,7,9};
    //Method 1

    for (int i = 0 ; i < 5 ;i++){
        arr[i]=1;
    }

    for (int i = 0; i< 5 ; i++){
        cout << arr[i] << " ";
    }
    
    return 0 ;
}