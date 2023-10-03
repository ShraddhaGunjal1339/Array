#include<iostream>
#include<vector>
using namespace std;

int findUnique(vector <int> arr){
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
    int uniqe_element =findUnique (arr);
    cout <<"Unique element is "<< uniqe_element <<endl;
    return 0;
}