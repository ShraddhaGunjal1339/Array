//Default values at which an array is initilized

#include<iostream>
using namespace std;

int main ( ){
    int arr[10] = {1,2};

    for (int i = 0 ; i <10 ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << endl;
    // Output 1 2 0 0 0 0 0 0 0 0
    //Remaining values  get initilized by zero"0" 
    int brr[20];

    //values get initilized by GARBEGE value 

    for (int i = 0 ; i <20 ; i++){
        cout << brr[i] << " ";
    }
    cout << endl;
    cout << endl;
    //Output -->0 0 -1230176222 1339537242 0 0 49102960 1 0 0 0 0 0 0 0 0 0 0 1 0


    // Initilize full array by zero '0'
    int crr[10]={0};
    for (int i = 0 ; i <10 ; i++){
        cout << crr[i] << "   ";
    }
    cout << endl;
    cout << endl;
    //Output --> 0 0 0 0 0 0 0 0 0 0 
    

    // Initilize full array by zero '1' 
    //NOT WORKS
    //need to use memset() function
    int drr[10]={1};
    for (int i = 0 ; i <10 ; i++){
        cout << drr[i] << "   ";
    }
    cout << endl;
    cout << endl;
    //Output --->1   0   0   0   0   0   0   0   0   0 

    return 0;
}