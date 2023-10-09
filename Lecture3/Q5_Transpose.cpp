#include<iostream>
using namespace std;

void printArray(int arr[][3] , int rows , int cols){
    //priting row  wise (normally )
    for(int i =0 ; i< rows ; i++){
        for (int j = 0 ;  j< cols;j++){
            cout << arr[i][j]<<"   "; 
        }
        cout <<endl;
    }
    cout <<endl;

}

void transpose(int arr[][3] ,int r , int c ,int transpose_arr[][3]){
    for(int i = 0 ; i < r ; i++){
        for (int j =0 ; j < c ;j++){
            //swap(arr[i][j] , arr[j][i]);
            transpose_arr[j][i] = arr [i][j];
        }
    }
}

int main()
{
    int arr [3][3];
    int rows = 3 ;
    int cols = 3 ;

    cout << "Give inpout to user " << rows 
     << " rows and " << cols << " columns"<<endl;
    //tacking input from user  
    for(int i =0 ; i< rows ; i++){
        for (int j = 0 ;  j< cols;j++){
            cin >> arr[i][j]; 
        }
    }

    int transpose_arr [3][3];
    printArray(arr ,rows ,cols);

    transpose(arr ,rows ,cols ,transpose_arr);

    printArray(transpose_arr  ,rows ,cols);
     
    return 0;
}