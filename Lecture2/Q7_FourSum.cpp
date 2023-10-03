#include<iostream>
#include<vector>
using namespace std;
void fourSum (vector <int> arr ,int sum){
    for(int i = 0; i <arr.size() ; i++){
        for (int j = i+1 ; j <arr .size() ;j++){
            for(int k =j+1 ;k <arr . size() ; k++){
                for(int l =k+1; l<arr.size() ;l++){
                    if (( arr[i]+arr[j]+arr[k]+arr[l]) == sum ){
                    cout <<'(' <<  arr[i] <<" , " << arr[j] << " , "<<arr[k]<< " , "<<arr[l] << ')'<<endl;
                }
                
            }
            }
            
        }
    }
}

//o/p -->(10 , 20 , 30 , 40)
int main()
{
    vector <int> arr ;
    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);
    arr.push_back(40);
    arr.push_back(50);
    arr.push_back(60);
    arr.push_back(70);
    arr.push_back(80);
    arr.push_back(90);


    int sum = 100;

    fourSum(arr , sum);
    return 0;
}