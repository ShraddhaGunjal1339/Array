//sort 0's and 1's   -->also known as
//Dutch natural flag problem 

#include<iostream>
#include<vector>
using namespace std;

void dutch_natural_flag(vector <int>& arr){
    int start = 0;
    int end = (arr .size()) -1 ;
    int i = 0;
    while(start <= end){
         if(arr[i] == 0){
            swap(arr[i],arr[start]);
            i++;
            start++;
        }
        else{
            swap(arr[i],arr[end]);
            //IMP
            //i++;         MISTAKE
            //no i++ here because we need to cheak that i again


            end--;
        }
    }
}

//o/p -->0  0  0  0  0  1  1  1  1

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