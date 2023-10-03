#include<iostream>
using namespace std;

void noOfZeroAndOne(int arr[] ,int size){

    int no_of_zero = 0;
    int no_of_one = 0;

    for (int i =0 ; i < size ;i++){
        if (arr[i] == 0){
            no_of_zero++;
        }else{
            no_of_one++;
        }
    }

    cout <<"The no of zero is:" << no_of_zero << endl;
    cout <<"The no of one is:" << no_of_one << endl;


}

int main()
{
    int arr [] = { 1 ,0 ,0 ,0 ,1 ,0 ,1 ,0 };
    int size = 8 ;

    noOfZeroAndOne(arr , size);
    return 0;
}