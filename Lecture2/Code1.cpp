#include<iostream>
#include<vector>
using namespace std;

int main()
{
    //create vector
    vector <int> arr ;
    //defalt size -->0
    cout <<"The size is"<< arr.size();
    cout << endl;

    //defalt capacity -->0
    cout <<"The capacity is"<< arr.capacity();
    cout << endl;

    //returns true i.e. 1
    cout <<"is empty"<< arr .empty();
    cout << endl;

    //sizeof() --> compiler dependent 
    //so dont use it
    int ans =(sizeof(arr)/sizeof(int));
    cout << ans << endl;

    //insert 
    arr.push_back(10);
    arr.push_back(20);


    //priting an vector 
    cout <<"priting an vector "<< endl;
    for (int  i = 0 ; i <arr.size() ; i++){
        cout << arr[i] << "  ";
    }
    cout << endl;
    //o/p-->10  20  

    //remove elements
    arr.pop_back();

    //priting an vector 
    cout <<"priting an vector "<< endl;
    for (int  i = 0 ; i <arr.size() ; i++){
        cout << arr[i] << "  ";
    }
    cout << endl;
    //o/p-->10  20  



    vector<int> brr (10);//size is 10  and initilize all elements equals to zero
    
    //vector<int> brr (10 ,-1);//size is 10  and initilize all elements equals to -1
    //vector<int> brr (10 ,-101);//size is 10  and initilize all elements equals to -101

    
    cout <<"The size is:"<< brr.size();
    cout << endl;


    cout <<"The capacity  is:"<< brr.capacity();
    cout << endl;

    //priting an vector 
    cout <<"priting an vector "<< endl;
    for (int  i = 0 ; i <brr.size() ; i++){
        cout << brr[i] << "  ";
    }
    cout << endl;
    //o/p -->0  0  0  0  0  0  0  0  0  0 


    //This do not work in my vs code but valid syntax to initilize 
    //vector by 10,20,30,40,50

    /*

    vector <int>  crr {10,20,30,40,50} ;

    //priting an vector 
    cout <<"priting an vector "<< endl;
    for (int  i = 0 ; i <crr.size() ; i++){
        cout << crr[i] << "  ";
    }
    cout << endl;

    */
    

    return 0;
}
