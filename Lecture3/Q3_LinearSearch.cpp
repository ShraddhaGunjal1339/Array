#include<iostream>
using namespace std;

bool findKey ( int arr[][3] , int rows , int cols , int key){

    for (int i = 0 ; i < rows ; i++){
        for ( int j =0 ; j < cols ; j++){
            if(arr[i][j]  == key){
                return true;
            }
        }
    }

    return false; 

}


/*o/p-->

Give input 3 rows and 3 columns
1 2 3 4 5 6 7 8 9
1   2   3   
4   5   6   
7   8   9   
Enter Key
4
Key is found
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

    int key;
    cout << "Enter Key" <<endl;
    cin >> key;

    if (findKey(arr , rows , cols , key)){
        cout << "Key is found " << endl;
    }else{
        cout << "Key not found " << endl;
    }
    return 0;
}