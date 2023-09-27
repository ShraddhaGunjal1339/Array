#include<iostream>
#include<vector>
using namespace std;


void triplet_sum (vector <int> arr , int sum){

     for(int i = 0; i <arr.size() ; i++){
        for (int j = i+1 ; j <arr .size() ;j++){
            for(int k =j+1 ;k <arr . size() ; k++){
                if (( arr[i]+arr[j]+arr[k]) == sum ){
                cout <<'(' <<  arr[i] <<" , " << arr[j] << " , "<<arr[k] << ')'<<endl;
            }
            }
            
        }
    }
}

//o/p  -->(10 , 20 , 50)
//(10 , 30 , 40)


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

    int sum = 80;
    triplet_sum(arr , sum);
    return 0;
}