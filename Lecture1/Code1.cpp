//Array in cpp

#include<iostream>
using namespace std;
 
int main (){
    //array declare

    int arr[7];
    cout << "Array creatrd successfully"<<endl;

    //address of array
    cout << arr << endl;
    cout << &arr <<endl;


    int arr1[53];
    char a[106];
    bool aaa[23];

    //Initilization of array
    int array [] ={2,3,4,5,6};
    int brray [5] ={2,3,4,5,6};
    int crray [10] ={2,3,4,5,6};


    //int drray [4] ={2,3,4,5,6};
    // it will give a error

    cout << "Array initilized sucessfuly"<<endl;
    int arrr[]={1,3,5,7};
    char err[10] ={'a','b','c'};


    cout << "Hello "<< endl;

    // cout << err[10];
    // cout << arr[11];//Garbege value which is 0 here
    

    //Acessing the values of array in c++
    cout << array[0] <<endl;
    cout << array[2] <<endl;

    //printing all the values

    for (int i = 0 ; i < 5 ; i++){
        cout << array[i] << endl;
    }

    //Taking input from user 

    int myarr[5];

    cout << "Give the input to the array"<<endl;
    for (int index =0 ; index < 5 ; index++ ){
        cin >> arr[index];
    }

     return 0;
}