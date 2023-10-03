#include<iostream>
#include<vector>

using namespace std;

void pairSum (vector <int>  arr , int sum){

    for(int i = 0; i <arr.size() ; i++){
        for (int j = i+1 ; j <arr .size() ;j++){
            if (( arr[i]+arr[j]) == sum ){
                cout <<'(' <<  arr[i] <<" , " << arr[j] << ')'<<endl;
            }
        }
    }
}
//o/p -->(3 , 6)
// (5 , 4)
// (7 , 2)
int main()
{
    vector <int> arr ;
    arr.push_back(1);
    arr.push_back(3);
    arr.push_back(5);
    arr.push_back(7);
    arr.push_back(2);
    arr.push_back(4);
    arr.push_back(6);

    int sum =9;
    pairSum(arr,sum);

    return 0;
}