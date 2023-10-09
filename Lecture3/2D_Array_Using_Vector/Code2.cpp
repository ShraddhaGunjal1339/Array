#include<iostream>
using namespace std;

void printArray(vector <vector <int> > arr ){
    //printing 2D array 

    for (int i = 0 ; i< arr.size() ; i++){ //no. of rows
        for (int j= 0; j < arr[i].size(); j++){//no. of colums
            //when no. of column is different in each row 
            //then use 
            //arr[i].size() 


             //when no. of column is same in each row 
            //then use 
            //arr[0].size() 
             

            cout << arr [i][j] << "  ";
        }
        cout << endl;
    }
}

/*o/p-->

0  0  0  0  0  
0  0  0  0  0  
0  0  0  0  0 

*/

int main()
{
    int row = 3;
    int col = 5;
    vector <vector <int> > arr (row ,vector <int> (col,0));   
    printArray(arr);
    return 0;
} 