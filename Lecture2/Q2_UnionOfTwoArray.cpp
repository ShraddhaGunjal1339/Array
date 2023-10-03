#include<iostream>
#include<vector>
using namespace std;

void findUnion(vector<int> arr ,vector <int> brr){
    vector<int> ans ;

    for (int i = 0; i < arr.size(); i++)
    {
        ans.push_back(arr[i]);
    }

     for (int i = 0; i < brr.size(); i++)
    {
        ans.push_back(brr[i]);
    }
    
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i]<<"  ";
    }
    
}
//o/p -->1  6  5  4  2  1  2  3  4  5  7 
int main()
{
    vector <int> arr ;
    vector <int> brr ;

    arr.push_back(1);
    arr.push_back(6);
    arr.push_back(5);
    arr.push_back(4);
    arr.push_back(2);

    brr.push_back(1);
    brr.push_back(2);
    brr.push_back(3);
    brr.push_back(4);
    brr.push_back(5);
    brr.push_back(7);

    findUnion(arr,brr);
    
    return 0;
}