#include<iostream>
using namespace std;

void printArrayRowWise(vector <vector <int> > a){
    cout << "Printing row wise " << endl;
    for (int i = 0 ; i < a.size() ; i++){
        for (int j =0 ; j < a[i].size() ; j++){
            cout << a[i][j] << "  ";
        }
        cout << endl;
    }
}

void printArrayColWise(vector <vector <int> > a){
    cout << "Printing col wise " << endl;
    for (int i = 0 ; i < a.size() ; i++){
        for (int j =0 ; j < a[i].size() ; j++){
            cout << a[j][i] << "  ";
        }
        cout << endl;
    }
}

/*o/p-->

Give input
1 2 3 4 5 6 7 8 9
Printing row wise 
1  2  3  
4  5  6  
7  8  9  
Printing col wise 
1  4  7  
2  5  8  
3  6  9  
*/


int main()
{
    int row = 3;
    int col = 3;
    vector <vector <int> > arr (row ,vector <int> (col,0)); 
    cout << "Give input" << endl;
    for (int i = 0 ; i < row; i++){
        for (int j = 0 ; j<col;j++){
            cin >> arr[i][j];
        }
    }
    printArrayRowWise(arr);
    printArrayColWise(arr);
    return 0;
}