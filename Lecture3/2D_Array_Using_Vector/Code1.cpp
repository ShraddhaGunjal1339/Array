#include<iostream>
#include<vector>
using namespace std;

void printArray(vector <vector <int> > arr ){
    //printing 2D array 

    for (int i = 0 ; i< arr.size() ; i++){ //no. of rows
        for (int j= 0; j < arr[0].size(); j++){//no. of colums
            //when no. of column is different in each row 
            //then use 
            //arr[i].size()  

            cout << arr [i][j] << "  ";
        }
        cout << endl;
    }
}


int main()
{
    vector<vector <int> > arr ;//outer vector

    vector <int> a ;//Inner vector
    a.push_back(4);
    a.push_back(9);
    a.push_back(1);

    vector <int> b ; //Inner vector
    b.push_back(2);
    b.push_back(4);
    b.push_back(7);

    vector <int> c ; //Inner vector 
    c.push_back(8);
    c.push_back(7);
    c.push_back(1 );


    arr.push_back(a);
    arr.push_back(b);
    arr.push_back(c);

    printArray(arr);
    return 0;
}

