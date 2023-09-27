//2D array

#include<iostream>
using namespace std;

/*
output -->
7
Printing row wise
1  2  3  
4  5  6  
7  8  9  

Printing column wise
1  4  7  
2  5  8  
3  6  9  

1 2 3 4 5 6 7 8 9        
1   2   3   
4   5   6   
7   8   9   
1 2 3 4 5 6 7 8 9 
1   4   7   
2   5   8   
3   6   9   

*/


int main()
{
    //declare
    int arr[3][3];

    //Initilization
    int brr[3][3] ={{1,2,3},     //row0
    {4,5,6},                     //row1
    {7,8,9}};                    //row2 

 
    //acess the element in 2D array
    cout << brr[1][3] << endl;

    cout <<"Printing row wise"<< endl;
    //acess the element in 2D array ROW WISE
    for(int i =0;i<3;i++){    //i-->row
        for(int j =0 ; j<3 ;j++){  // j-->col
            cout << brr[i][j] << "  ";
        }
        cout << endl;
    }
    cout << endl; 


    cout <<"Printing column wise"<< endl;
    //acess the element in 2D array COLUMN  WISE
    for(int i =0;i<3;i++){         // i-->col
        for(int j =0 ; j<3 ;j++){   // j-->row
            cout << brr[j][i] << "  ";
        }
        cout << endl;
    }
    cout << endl;


    int crr[3][3];
    int rows =3 ;
    int cols =3 ;  

    //tacking input from user ROW WISE
    for(int i =0 ; i< rows ; i++){
        for (int j = 0 ;  j< cols;j++){
            cin >> crr[i][j]; 
        }
    }

    //priting row wise
    for(int i =0 ; i< rows ; i++){
        for (int j = 0 ;  j< cols;j++){
            cout << crr[i][j]<<"   "; 
        }
        cout <<endl;
    }

    //tacking input from user column wise

    for(int i =0 ; i< cols ; i++){
        for (int j = 0 ;  j< rows;j++){
            cin >> crr[j][i]; 
        }
    }

    //priting column wise
    
    for(int i =0 ; i< cols ; i++){
        for (int j = 0 ;  j< rows;j++){

            //cout << crr[j][i]<<"   ";    NOT WORKS

            //we have taken the input as column wise hence we get 
            //output as simple when we print it column wise
            /*1 2 3 4 5 6 7 8 9
                1   2   3   
                4   5   6   
                7   8   9 */
            //to print it  column wise print it as simple way
            //i.e.
            cout << crr[i][j]<<"   ";
            /*1 2 3 4 5 6 7 8 9 
                1   4   7   
                2   5   8   
                3   6   9 */

        }
        cout <<endl;
    }

    return 0;
}