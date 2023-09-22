#include<iostream>
using namespace std;

int main()
{
    int arr[] = {1 ,0 ,0, 0, 1, 1, 1, 1, 0, 0, 1, 0 ,1};
    int  size =13;
    int numZero = 0;
    int numOne = 0;

    for(int i =0 ;i <size ; i++){
        if(arr[i] == 0){
            numZero++;
        }
        if (arr[i] == 1){
            numOne++;
        }
    }

    cout  << "No of zero = " << numZero << endl;
    cout  << "No of one = " << numOne << endl;

    return 0;
}