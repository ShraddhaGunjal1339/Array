//Better than Q5.1_ExtremePrint.cpp

// 2 pointer approach
//To print extreme
//Output -->1  8  2  7  3  6  4  5  size =8;
//Output -->1  7  2  6  3  5  4  4  size =7 and if condition is not added
//Output -->1  7  2  6  3  5  4     size =7 and if condition is added 

//This is the O/P now

#include<iostream>
using namespace std;


void extremePrint(int a[] ,int size){
    int start =0;
    int end = size -1;
    while (start <= end){
        //IMP
        if(start == end){
        //To print odd array size just once
        //If not added prints middle element twice
            cout << a[start] << "  ";
            return;
        }else{
            cout << a[start] << "  ";
            cout << a[end] << "  ";
            start++;
            end--;
        }
        
    }
    cout << endl;
}


int main(){
    
    int arr[10] ={1,2,3,4,5,6,7};
    int size =7;

    extremePrint(arr ,size);
    return 0;
}
