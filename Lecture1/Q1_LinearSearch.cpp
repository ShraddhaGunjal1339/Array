//Linear Search on an array

#include<iostream>
using namespace std;
bool find(int a[] , int n , int key){

    //Linear search
    for (int i =0 ; i < n ;i++){
        if (a[i] == key){
            return true;
        }
    }
    //Not present
    return false;
}


int main()
{
    int arr[5] ={1,3,5,7,8};
    int size =5;
    cout << "Enter the key to find "<< endl;
    int key ;
    cin >> key;
    if(find (arr ,size , key)){
        cout << "Found" << endl;
    }else {
        cout << "Not Found" << endl;
    }

    return 0;
}