#include<iostream>
using namespace std;

int max_num(int a[] , int size){
    int max_int = INT_MIN;
    for (int i = 0 ; i <size ; i++){
        if( a[i] > max_int){
            max_int = a[i];
        }
    }
    return max_int;
}

int main()
{
    int arr[]={1 ,2 ,4 ,5, 8 ,9 ,12,18 ,44,343};
    int size =10;
    int Maxnum =max_num(arr ,size);
    cout << "The maximum number is =" <<Maxnum << endl;
    return 0;
}