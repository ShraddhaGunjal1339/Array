//left rotate an array by 1 position

#include<iostream>
#include<vector>
using namespace std;

vector<int> rotateArray(vector<int>& arr, int n) {
    // Write your code here.
    int s =0 ;
    int first = arr[s];
    int e = n-1;
    while(s!=e){
        arr [s] =arr[s+1];
        s++;
    }
    arr[e]=first;
    return arr;
}
//o/p -->2   3   4   5   6   7   8   9   1

int main()
{
    vector <int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(5);
    arr.push_back(6);
    arr.push_back(7);
    arr.push_back(8);
    arr.push_back(9);



    vector <int> ans = rotateArray(arr,arr.size());

    //print 
    for(auto value : ans ){
        cout<<value<<"   ";
    }
    return 0;
}