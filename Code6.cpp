#include<iostream>
using namespace std;

void printArray(int a[], int n){
    for (int i = 0 ; i< n ; i++){
        cout << a[i] << "  ";
    }
    cout << endl;
}

void inc(int a[] ,int n ){
    a[0] = a[0]+100;
    printArray(a ,n);
}

int main (){
    int arr []= {1,5,6};
    int size =3;
    inc(arr,size);
    printArray(arr , size);
    return 0;
}