//sort 0's and 1's   -->also known as
//Dutch natural flag problem 

#include<iostream>
#include<vector>
using namespace std;

void dutchNaturalFlag(vector <int>& arr){
    int start = 0;
    int end = (arr .size()) -1 ;
    int i = 0;
    while(i != end ){
        //condition --> i !=end
        //condition --> start !=end
        //condition --> start <= end


         if(arr[i] == 0){
            //this swap is not needed
            //as i and start is on same location always
            //swap(arr[i],arr[start]);
            i++;
            start++;
        }
        else{
            swap(arr[i],arr[end]);
            //IMP
            //i++;         MISTAKE
            //no i++ here because we need to cheak that i again
            //**  because after swap in i there is a new number  **
            
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

    dutchNaturalFlag(arr);


    //print the arr
    for(auto ele : arr){
        cout << ele <<"  ";
    }
    // OR use 
    // for (int  i = 0; i < arr.size(); i++)
    // {
    //     cout << arr[i] << "  ";
    // }
    
    cout << endl;
    return 0;
}