#include<iostream>
#include<vector>
using namespace std;


int find_unique(vector <int> arr){
    int ans =0;
    //0^1 -->1
    //0^0 -->0
    //0 dosent make any change in given input
    for (int i = 0; i < arr.size(); i++)
    {
        ans ^= arr[i];
    }

    return ans;
    
}

int main()
{
    int n ;
    cout << "Give  size of array "<<endl;
    cin >> n;

    vector<int> arr (n);

    cout <<"Enter the  elements "<< endl;

    for (int i = 0; i< arr .size() ;i++){
        cin >> arr[i];
    }
    int uniqeElement =find_unique (arr);
    cout <<"Unique element is "<< uniqeElement <<endl;
    return 0;
}