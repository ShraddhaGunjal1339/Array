#include<iostream>
using namespace std;

void printColumnWiseSum ( int arr[][3] ,int rows , int cols){

    //col wise sum -->col wise traversal
    for(int i =0 ; i< rows ; i++){
        int sum = 0 ;
        for (int j = 0 ;  j< cols;j++){
            sum += arr[j][i];
        }
        cout << sum ;
        cout << endl;
    }
}

/*o/p-->

Give input 3 rows and 3 columns
1 2 3 4 5 6 7 8 9
1   2   3   
4   5   6   
7   8   9   
12
15
18
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

    printColumnWiseSum(arr , rows , cols );
    return 0;
}