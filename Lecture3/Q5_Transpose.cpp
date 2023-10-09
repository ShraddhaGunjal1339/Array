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


/*o/p-->

Give input 3 rows and 3 columns
1 2 3 4 5 6 7 8 9
1   2   3   
4   5   6   
7   8   9   

1   4   7   
2   5   8   
3   6   9  
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

    int transpose_arr [3][3];
    printArray(arr ,rows ,cols);

    transpose(arr ,rows ,cols ,transpose_arr);

    printArray(transpose_arr  ,rows ,cols);
     
    return 0;
}