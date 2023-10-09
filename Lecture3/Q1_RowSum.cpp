#include<iostream>
using namespace std;

void printRowWiseSum(int arr[][3] ,int rows ,int cols){

    //row wise sum -->row wise traversal
    for(int i =0 ; i< rows ; i++){
        int sum = 0 ;
        for (int j = 0 ;  j< cols;j++){
            sum += arr[i][j];
        }
        cout << sum ;
        cout << endl;
    }
    
}

/*o/p-->

1 2 3 4 5 6 7 8 9
1   2   3   
4   5   6   
7   8   9   
6
15
24

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
    

    //priting row wise
    for(int i =0 ; i< rows ; i++){
        for (int j = 0 ;  j< cols;j++){
            cout << arr[i][j]<<"   "; 
        }
        cout <<endl;
    }

    printRowWiseSum(arr ,rows , cols );

    return 0;
}