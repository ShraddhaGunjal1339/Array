#include<iostream>
#include<vector>
using namespace std;

void findUnionDuplicate(vector <int> arr , vector <int> brr){
    vector<int> ans ;

    for (int i = 0; i < arr.size(); i++)
    {
        ans.push_back(arr[i]);
        //Intersection logic
        //make marking = INT_MIN    (you can make it -1 also for +ve array)
        for ( int j = 0 ; j < brr .size() ; j++){
            if( arr[i] == brr [j]){
                brr[j] = INT_MIN;
            }
        }
    }

     for (int i = 0; i < brr.size(); i++)
    {   //cheak marking
        if(brr [i] != INT_MIN){
            ans.push_back(brr[i]);
        }
    }
    
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i]<<"  ";
    }
}
//o/p -->1  6  5  4  2  3  7
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

    findUnionDuplicate(arr,brr);
    return 0;
}