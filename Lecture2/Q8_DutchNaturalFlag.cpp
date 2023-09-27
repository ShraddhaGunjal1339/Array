#include<iostream>
#include<vector>
using namespace std;

void dutch_natural_flag(vector <int>& arr){
    int start = 0;
    int end = (arr .size()) -1 ;
    int i = 0;
    while(i !=  arr.size()){
         if(arr[i] == 0){
            swap(arr[i],arr[start]);
            i++;
            start++;
        }
        else if(arr[i] == 1){
            swap(arr[i],arr[end]);
            i++;
            end--;
        }
    }
   

}

//o/p -->

int main()
{
    vector <int> arr;
    arr.push_back(0);
    arr.push_back(1);
    arr.push_back(1);
    arr.push_back(0);
    arr.push_back(1);
    arr.push_back(0);
    arr.push_back(1);
    arr.push_back(0);
    arr.push_back(0);

    dutch_natural_flag(arr);

    //  int start = 0;
    // int end = arr . size() -1 ;
    // int i = 0;
    // // for(int index = 0 ; index < arr . size() ; index++){
    //     if(arr[i] == 0){
    //         swap(arr[i],arr[start]);
    //         i++;
    //         start++;
    //     }
    //     if(arr[i] == 1){
    //         swap(arr[i],arr[end]);
    //         i++;
    //         end++;
    //     }
    
    
    // for(auto ele : ans){
    //     cout << ele <<"  ";
    // }
    for (int  i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << "  ";
    }
    
    cout << endl;
    return 0;
}