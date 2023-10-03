// Use Q5.2_ExtremePrint.cpp better than this

//To print extreme
//Output --> 1  8  2  7  3  6  4  5  

#include<iostream>
using namespace std;
void extremePrint (int a[] ,int size ){

    bool flag = 1;
    int initial =0;
    int last = size -1;
    for (int i = 0 ; i < size ; i++){
        if(flag){
            cout << a[initial] << "  ";
            initial++;
            flag = 0;
        }else{
            cout << a[last] << "  ";
            last--;
            flag = 1;
        }
    }
    cout << endl;
}
int main()
{
    int arr[10] = {1 ,2, 3,4 ,5 ,6 ,7 , 8 };
    int size = 8;

    extremePrint(arr , size);
    return 0;
}