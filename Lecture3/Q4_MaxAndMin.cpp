#include<iostream>
using namespace std;

int maximum(int arr[][3] , int rows , int cols){
    int maxi = INT_MIN;

    for(int i = 0 ; i < rows ; i++){
        for (int j = 0 ;j<cols ;j++){
            if(arr[i][j] > maxi){
                maxi = arr[i][j];
            }
        }
    }

    return maxi;
}

int minimum(int arr[][3] , int rows , int cols){
    int mini = INT_MAX;

    for(int i = 0 ; i < rows ; i++){
        for (int j = 0 ;j<cols ;j++){
            if(mini > arr[i][j]){
                mini = arr[i][j];
            }
        }
    }

    return mini;
}


/*

Give input  3 rows and 3 columns
1 2 3 4 5 6 7 8 9
1   2   3   
4   5   6   
7   8   9   
the maximum is :9
the minimum is :1

*/
int main()
{
    int arr [3][3];
    int rows = 3 ;
    int cols = 3 ;

    cout << "Give input " << rows 
     << " rows and " << cols << " columns"<<endl;
    //tacking input from user 
    for(int i =0 ; i< rows ; i++){
        for (int j = 0 ;  j< cols;j++){
            cin >> arr[i][j]; 
        }
    }

    //priting row  wise (normally )
    for(int i =0 ; i< rows ; i++){
        for (int j = 0 ;  j< cols;j++){
            cout << arr[i][j]<<"   "; 
        }
        cout <<endl;
    }

    int maxi = maximum(arr , rows , cols);
    int mini = minimum(arr , rows , cols);

    cout << "the maximum is :" << maxi << endl;
    cout << "the minimum is :" << mini << endl;

    return 0;
}