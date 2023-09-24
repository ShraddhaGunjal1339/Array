// memset()  sets value of integer array to 0 or -1 
//for character array 


#include<iostream>
using namespace std;

int main (){
    int a[5];

    //Set value equals to  -1
    cout << endl;

    memset(a,-1,sizeof(a));
    for (int i = 0 ; i < 5 ;i++ ){
        cout << a[i] << endl;
    }
    cout << endl;
    //Set value equals to  0

    memset(a,0,sizeof(a));
    for (int i = 0 ; i < 5 ;i++ ){
        cout << a[i] << endl;
    }
    cout << endl;

    //Set value equals to  7
    //Not works

    memset(a,7,sizeof(a));
    for (int i = 0 ; i < 5 ;i++ ){
        cout << a[i] << endl;
    }
    cout << endl;

    //For character array
    //Replaces all the values
    char str[] = "geeksforgeeks";
    memset(str, 't', sizeof(str));
    cout << str;
    cout << endl;

    return 0; 
}