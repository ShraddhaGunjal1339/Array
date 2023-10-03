//To reverse an array

//Also All '7' methods to swap are implemented here


#include<iostream>
using namespace std;

//Imp
void Swap1(int& a ,int& b){//need to add '&' operator to see changes
    //using temp
    int temp ;
    temp =a;
    a=b;
    b = temp;
}

//Imp
void Swap2(int& a, int& b){
    //using + and -
    //a=10
    //b=5
    a = a + b;//a=15  (10+5)
    b = a - b;//b=10  (15-5)
    a = a - b;//a=5   (15-10)

}


void Swap3(int& a, int& b){
    //using * and /
    a=a*b; //a=50   (5*10)    
    b=a/b; //b=5    (50/10)    
    a=a/b; //a=10   (50/5)    
}

//Imp
void Swap4(int& x , int& y ){
    //x=10
    //y=5
    // Code to swap 'x' (1010) and 'y' (0101)
    x = x ^ y; // x now becomes 15 (1111)
    y = x ^ y; // y becomes 10 (1010)
    x = x ^ y; // x becomes 5 (0101)
}

void Swap5(int* xp, int* yp)
{   
    //  Swap5(arr[start],arr[end]);  -->  Swap5(&arr[start],&arr[end]);
    //Pointer method



    //If not added this if condition middle element will not get replaced 
    //Middle element will be zero -->7  6  5  0  3  2  1

    //IMP
    if (xp == yp)
        return;
    *xp = *xp ^ *yp;
    *yp = *xp ^ *yp;
    *xp = *xp ^ *yp;
}

void Swap6(int& a ,int& b){
    //IMP
    if(a==b){
        return;
    }
    // same as a = a + b
    a = (a & b) + (a | b);
    // same as b = a - b
    b = a + (~b) + 1;
    // same as a = a - b
    a = a + (~b) + 1;
}


void Swap7(int& x ,int& y ){
    //Single line code
    x = (x * y) / (y = x);

}

int main()
{
    int arr[10]={1,2,3,4,5,6,7};
    int size = 7;

    //reverse an array

    int start = 0;
    int end = size -1;
    while (start <= end){
        Swap7(arr[start],arr[end]);
        //Swap5(&arr[start],&arr[end]);
        start ++ ;
        end -- ;
    }

    //Print an array

    for(int  i = 0; i < size; i++)
    {
        cout << arr [i] << "  ";
    }
    return 0;
}