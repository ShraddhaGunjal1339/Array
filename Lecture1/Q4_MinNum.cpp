#include<iostream>
using namespace std;
int minNum(int a[] ,int size){
    int min =INT_MAX;
    for (int i = 0 ; i < size ; i++){
        if(a[i] < min ){
            min = a[i];
        }
    }
    return min ;
}
int main()
{
    int arr[10]={23 ,-999999,34, 54 ,1, -9 ,9823 ,-77 ,-1111};
    int size = 8;
    int min_int  = minNum(arr , size);
    cout << "The minimum number is :" << min_int << endl;
    return 0;
}